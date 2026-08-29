#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <thread>
#include <filesystem>
#include <atomic>
#include <memory>
#include <mutex>
#include <exception>
#include <cstdlib>
#include "recomp.h"
#include "funcs.h"
#include "librecomp/overlays.hpp"
#include "librecomp/sections.h"
#include "librecomp/game.hpp"
#include "ultramodern/ultramodern.hpp"
#include "ultramodern/renderer_context.hpp"
#include "ultramodern/rsp.hpp"
#include "ultramodern/input.hpp"
#include "ultramodern/events.hpp"
#include "ultramodern/error_handling.hpp"
#include "ultramodern/threads.hpp"
#include "recomp_overlays.inl"

#ifdef _WIN32
#include <windows.h>
#include <unknwn.h>
#include <oleauto.h>
#endif

#include "hle/rt64_application.h"
#include "gbi/rt64_gbi_f3dex2.h"
#include "gbi/rt64_gbi_rdp.h"

extern "C" uint8_t rdram[0x1000000];
extern "C" uint8_t* g_rom_data = nullptr;
extern "C" size_t g_rom_size = 0;
extern "C" uint8_t g_mmio_dummy[0x10000] = {0};
static std::atomic_bool g_running = true;

namespace {
alignas(16) uint8_t rt64_dmem[0x1000]{};
alignas(16) uint8_t rt64_imem[0x1000]{};
uint32_t mi_intr_reg = 0;
uint32_t dpc_start_reg = 0;
uint32_t dpc_end_reg = 0;
uint32_t dpc_current_reg = 0;
uint32_t dpc_status_reg = 0;
uint32_t dpc_clock_reg = 0;
uint32_t dpc_bufbusy_reg = 0;
uint32_t dpc_pipebusy_reg = 0;
uint32_t dpc_tmem_reg = 0;

void rt64_check_interrupts() {}

ultramodern::renderer::SetupResult map_rt64_setup_result(RT64::Application::SetupResult result) {
    switch (result) {
        case RT64::Application::SetupResult::Success: return ultramodern::renderer::SetupResult::Success;
        case RT64::Application::SetupResult::DynamicLibrariesNotFound: return ultramodern::renderer::SetupResult::DynamicLibrariesNotFound;
        case RT64::Application::SetupResult::InvalidGraphicsAPI: return ultramodern::renderer::SetupResult::InvalidGraphicsAPI;
        case RT64::Application::SetupResult::GraphicsAPINotFound: return ultramodern::renderer::SetupResult::GraphicsAPINotFound;
        case RT64::Application::SetupResult::GraphicsDeviceNotFound: return ultramodern::renderer::SetupResult::GraphicsDeviceNotFound;
    }
    return ultramodern::renderer::SetupResult::GraphicsDeviceNotFound;
}

ultramodern::renderer::GraphicsApi map_rt64_graphics_api(RT64::UserConfiguration::GraphicsAPI api) {
    switch (api) {
        case RT64::UserConfiguration::GraphicsAPI::D3D12: return ultramodern::renderer::GraphicsApi::D3D12;
        case RT64::UserConfiguration::GraphicsAPI::Vulkan: return ultramodern::renderer::GraphicsApi::Vulkan;
        case RT64::UserConfiguration::GraphicsAPI::Metal: return ultramodern::renderer::GraphicsApi::Metal;
        case RT64::UserConfiguration::GraphicsAPI::Automatic: return ultramodern::renderer::GraphicsApi::Auto;
    }
    return ultramodern::renderer::GraphicsApi::Auto;
}
}

static void SaveFramebufferBMP(const char* filename, const uint32_t* pixels, int width, int height) {
    if (!pixels || width <= 0 || height <= 0) return;
    BITMAPFILEHEADER bfh = {0};
    BITMAPINFOHEADER bih = {0};

    int row_stride = width * 4;
    int image_size = row_stride * height;

    bfh.bfType = 0x4D42; // "BM"
    bfh.bfSize = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER) + image_size;
    bfh.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);

    bih.biSize = sizeof(BITMAPINFOHEADER);
    bih.biWidth = width;
    bih.biHeight = height; // positive = bottom-up
    bih.biPlanes = 1;
    bih.biBitCount = 32;
    bih.biCompression = BI_RGB;
    bih.biSizeImage = image_size;

    std::ofstream out(filename, std::ios::binary);
    if (!out.is_open()) return;

    out.write(reinterpret_cast<const char*>(&bfh), sizeof(bfh));
    out.write(reinterpret_cast<const char*>(&bih), sizeof(bih));

    for (int y = height - 1; y >= 0; y--) {
        out.write(reinterpret_cast<const char*>(&pixels[y * width]), width * 4);
    }
}

#ifdef _WIN32
class ConkerRendererContext : public ultramodern::renderer::RendererContext {
private:
    HWND m_hwnd;
    uint8_t* m_rdram;
    std::unique_ptr<RT64::Application> m_app;
    std::vector<uint32_t> m_pixel_buffer;
    bool m_has_rendered_workload = false;
    std::mutex m_rt64_mutex;

public:
    ConkerRendererContext(uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle)
        : m_hwnd(window_handle.window), m_rdram(rdram) {
        setup_result = ultramodern::renderer::SetupResult::GraphicsDeviceNotFound;
        chosen_api = ultramodern::renderer::GraphicsApi::Auto;
        m_pixel_buffer.resize(640 * 480, 0xFF000000);

        try {
            RT64::Application::Core core = {};
            static unsigned char dummy_rom_header[0x40]{};
            core.window = plume::RenderWindow(window_handle.window);
            core.RDRAM = rdram;
            core.HEADER = dummy_rom_header;
            core.DMEM = rt64_dmem;
            core.IMEM = rt64_imem;
            core.MI_INTR_REG = &mi_intr_reg;
            core.DPC_START_REG = &dpc_start_reg;
            core.DPC_END_REG = &dpc_end_reg;
            core.DPC_CURRENT_REG = &dpc_current_reg;
            core.DPC_STATUS_REG = &dpc_status_reg;
            core.DPC_CLOCK_REG = &dpc_clock_reg;
            core.DPC_BUFBUSY_REG = &dpc_bufbusy_reg;
            core.DPC_PIPEBUSY_REG = &dpc_pipebusy_reg;
            core.DPC_TMEM_REG = &dpc_tmem_reg;
            core.checkInterrupts = rt64_check_interrupts;

            auto* vi = ultramodern::renderer::get_vi_regs();
            if (vi) {
                core.VI_STATUS_REG = &vi->VI_STATUS_REG;
                core.VI_ORIGIN_REG = &vi->VI_ORIGIN_REG;
                core.VI_WIDTH_REG = &vi->VI_WIDTH_REG;
                core.VI_INTR_REG = &vi->VI_INTR_REG;
                core.VI_V_CURRENT_LINE_REG = &vi->VI_V_CURRENT_LINE_REG;
                core.VI_TIMING_REG = &vi->VI_TIMING_REG;
                core.VI_V_SYNC_REG = &vi->VI_V_SYNC_REG;
                core.VI_H_SYNC_REG = &vi->VI_H_SYNC_REG;
                core.VI_LEAP_REG = &vi->VI_LEAP_REG;
                core.VI_H_START_REG = &vi->VI_H_START_REG;
                core.VI_V_START_REG = &vi->VI_V_START_REG;
                core.VI_V_BURST_REG = &vi->VI_V_BURST_REG;
                core.VI_X_SCALE_REG = &vi->VI_X_SCALE_REG;
                core.VI_Y_SCALE_REG = &vi->VI_Y_SCALE_REG;
            }

            RT64::ApplicationConfiguration appConfig = {};
            appConfig.appId = "conker";
            appConfig.useConfigurationFile = false;

            m_app = std::make_unique<RT64::Application>(core, appConfig);
            m_app->userConfig.graphicsAPI = RT64::UserConfiguration::GraphicsAPI::Vulkan;
            auto res = m_app->setup(window_handle.thread_id);
            setup_result = map_rt64_setup_result(res);
            chosen_api = map_rt64_graphics_api(m_app->chosenGraphicsAPI);
            if (res == RT64::Application::SetupResult::Success) {
                std::cout << "[Conker RT64] Graphics engine initialized successfully (API "
                          << static_cast<int>(m_app->chosenGraphicsAPI) << ").\n" << std::flush;
            } else {
                std::cout << "[Conker RT64] RT64 setup status: " << (int)res << " (using software fallback)\n" << std::flush;
                m_app.reset();
            }
        } catch (const std::exception& e) {
            std::cerr << "[Conker RT64] Exception initializing RT64: " << e.what() << "\n" << std::flush;
            m_app.reset();
        } catch (...) {
            std::cerr << "[Conker RT64] Unknown error initializing RT64\n" << std::flush;
            m_app.reset();
        }
    }

    bool valid() override { return m_app != nullptr; }
    bool update_config(const ultramodern::renderer::GraphicsConfig&, const ultramodern::renderer::GraphicsConfig&) override { return false; }
    void enable_instant_present() override {}

    void send_dl(const OSTask* task) override {
        if (!task) return;
        const std::lock_guard<std::mutex> rt64Lock(m_rt64_mutex);
        static int dl_count = 0;
        dl_count++;
        if (dl_count <= 10 || dl_count % 60 == 0) {
            std::cout << "[Conker GFX] Processing DisplayList #" << dl_count << " (type: " << task->t.type 
                      << ", data: 0x" << std::hex << (uint32_t)(uintptr_t)task->t.data_ptr 
                      << ", size: 0x" << task->t.data_size << std::dec << ")\n" << std::flush;
        }

        if (m_app) {
            m_app->state->rsp->reset();
            m_app->interpreter->loadUCodeGBI(
                static_cast<uint32_t>(task->t.ucode) & 0x03FFFFFF,
                static_cast<uint32_t>(task->t.ucode_data) & 0x03FFFFFF,
                true
            );

            // Conker uses Rare's custom F3DEXBG microcode, which is based on F3DEX2.
            // Use F3DEX2 command parser so all DisplayLists are processed.
            if (m_app->interpreter->hleGBI == nullptr) {
                auto& fallbackGBI = m_app->interpreter->gbiManager.gbiCache[
                    static_cast<uint32_t>(RT64::GBIUCode::F3DEX2)
                ];
                if (fallbackGBI.ucode == RT64::GBIUCode::Unknown) {
                    fallbackGBI.ucode = RT64::GBIUCode::F3DEX2;
                    RT64::GBI_RDP::setup(&fallbackGBI, true);
                    RT64::GBI_F3DEX2::setup(&fallbackGBI);
                    fallbackGBI.flags.NoN = true;
                }

                static bool warnedAboutF3DEXBG = false;
                if (!warnedAboutF3DEXBG) {
                    std::cout << "[Conker RT64] F3DEXBG DisplayLists mapped to compatible F3DEX2 parser.\n" << std::flush;
                    warnedAboutF3DEXBG = true;
                }

                m_app->interpreter->hleGBI = &fallbackGBI;
                m_app->state->rsp->setGBI(&fallbackGBI);
                if (fallbackGBI.resetFromTask != nullptr) {
                    fallbackGBI.resetFromTask(m_app->state.get());
                }
            }

            uint32_t dl_start = ((uint32_t)(uintptr_t)task->t.data_ptr) & 0x00FFFFFF;
            try {
                m_app->processDisplayLists(m_rdram, dl_start, dl_start + task->t.data_size, true);
                m_has_rendered_workload = true;
            } catch (const std::exception& e) {
                std::cerr << "[Conker RT64 Warning] processDisplayLists exception: " << e.what() << "\n" << std::flush;
            } catch (...) {
                std::cerr << "[Conker RT64 Warning] processDisplayLists unknown exception caught.\n" << std::flush;
            }
        }
    }

    void send_dummy_workload(uint32_t) override {}

    void update_screen() override {
        const std::lock_guard<std::mutex> rt64Lock(m_rt64_mutex);
        if (m_app) {
            try {
                m_app->updateScreen();
            } catch (...) {
            }
        }

        if (!m_hwnd || !m_rdram) return;
        auto* vi = ultramodern::renderer::get_vi_regs();
        uint32_t origin = vi ? vi->VI_ORIGIN_REG : 0;
        uint32_t width = (vi && vi->VI_WIDTH_REG > 0 && vi->VI_WIDTH_REG <= 640) ? vi->VI_WIDTH_REG : 320;
        uint32_t height = (width >= 640) ? 480 : 240;
        uint32_t ram_offset = origin & 0x00FFFFFF;

        if (origin != 0 && (ram_offset + width * height * 2 <= 0x1000000)) {
            uint32_t num_pixels = width * height;
            if (m_pixel_buffer.size() < num_pixels) {
                m_pixel_buffer.resize(num_pixels);
            }

            const uint16_t* src16 = reinterpret_cast<const uint16_t*>(&m_rdram[ram_offset]);
            for (uint32_t i = 0; i < num_pixels; i++) {
                uint16_t p = (src16[i] >> 8) | (src16[i] << 8); // big-endian swap
                uint8_t r = ((p >> 11) & 0x1F) << 3;
                uint8_t g = ((p >> 6) & 0x1F) << 3;
                uint8_t b = ((p >> 1) & 0x1F) << 3;
                m_pixel_buffer[i] = (0xFF << 24) | (r << 16) | (g << 8) | b;
            }

            HDC hdc = GetDC(m_hwnd);
            if (hdc) {
                RECT client_rect;
                GetClientRect(m_hwnd, &client_rect);
                int dst_w = client_rect.right - client_rect.left;
                int dst_h = client_rect.bottom - client_rect.top;

                BITMAPINFO bmi = {0};
                bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
                bmi.bmiHeader.biWidth = width;
                bmi.bmiHeader.biHeight = -static_cast<LONG>(height); // top-down
                bmi.bmiHeader.biPlanes = 1;
                bmi.bmiHeader.biBitCount = 32;
                bmi.bmiHeader.biCompression = BI_RGB;

                StretchDIBits(
                    hdc,
                    0, 0, dst_w, dst_h,
                    0, 0, width, height,
                    m_pixel_buffer.data(),
                    &bmi,
                    DIB_RGB_COLORS,
                    SRCCOPY
                );
                ReleaseDC(m_hwnd, hdc);
            }
        }
    }

    void shutdown() override {
        if (m_app) {
            m_app->end();
            m_app.reset();
        }
    }

    uint32_t get_display_framerate() const override { return 60; }
    float get_resolution_scale() const override { return 1.0f; }
};

static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_DESTROY:
            g_running = false;
            PostQuitMessage(0);
            return 0;
        case WM_ERASEBKGND:
            return 1;
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            EndPaint(hwnd, &ps);
            return 0;
        }
    }
    return DefWindowProcA(hwnd, msg, wParam, lParam);
}
#endif

#ifdef _WIN32
static LONG WINAPI VectoredCrashHandler(PEXCEPTION_POINTERS pExceptionInfo) {
    DWORD code = pExceptionInfo->ExceptionRecord->ExceptionCode;
    PVOID addr = pExceptionInfo->ExceptionRecord->ExceptionAddress;
    if (code != 0xE06D7363 && code != 0x40010006 && code != 0x406D1388) { // filter out C++ throw, debug string, and thread naming
        uintptr_t mod_base = (uintptr_t)GetModuleHandle(NULL);
        uintptr_t rva = (uintptr_t)addr >= mod_base ? (uintptr_t)addr - mod_base : (uintptr_t)addr;
        fprintf(stderr, "\n[FATAL CRASH] Exception Code: 0x%08X at Address: %p (RVA: +0x%llX, Base: 0x%llX)\n", (unsigned int)code, addr, (unsigned long long)rva, (unsigned long long)mod_base);
        if (code == EXCEPTION_ACCESS_VIOLATION) {
            ULONG_PTR is_write = pExceptionInfo->ExceptionRecord->ExceptionInformation[0];
            ULONG_PTR target_addr = pExceptionInfo->ExceptionRecord->ExceptionInformation[1];
            fprintf(stderr, "[FATAL CRASH] Memory %s at address: 0x%p\n", is_write ? "WRITE" : "READ", (void*)target_addr);
        }
        void* stack[32];
        USHORT frames = CaptureStackBackTrace(0, 32, stack, NULL);
        fprintf(stderr, "[FATAL CRASH] Stack Trace (%d frames):\n", (int)frames);
        for (USHORT i = 0; i < frames; i++) {
            uintptr_t frame_rva = (uintptr_t)stack[i] >= mod_base ? (uintptr_t)stack[i] - mod_base : (uintptr_t)stack[i];
            fprintf(stderr, "  #%02d: %p (+0x%llX)\n", (int)i, stack[i], (unsigned long long)frame_rva);
        }
        fflush(stderr);
    }
    return EXCEPTION_CONTINUE_SEARCH;
}
#endif

int main(int argc, char* argv[]);

#ifdef _WIN32
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    return main(__argc, __argv);
}
#endif

static SDL_AudioDeviceID g_audio_device = 0;
static uint32_t g_audio_frequency = 48000;

static void audio_set_frequency(uint32_t freq) {
    if (freq == 0) freq = 48000;
    if (g_audio_device != 0 && g_audio_frequency == freq) return;

    if (g_audio_device != 0) {
        SDL_CloseAudioDevice(g_audio_device);
        g_audio_device = 0;
    }

    g_audio_frequency = freq;
    SDL_AudioSpec wanted, have;
    std::memset(&wanted, 0, sizeof(wanted));
    wanted.freq = freq;
    wanted.format = AUDIO_S16SYS;
    wanted.channels = 2;
    wanted.samples = 1024;
    wanted.callback = nullptr;

    g_audio_device = SDL_OpenAudioDevice(nullptr, 0, &wanted, &have, 0);
    if (g_audio_device != 0) {
        SDL_PauseAudioDevice(g_audio_device, 0);
        std::cout << "[Conker Audio] SDL2 Audio active (" << have.freq << " Hz, " << (int)have.channels << " ch).\n" << std::flush;
    }
}

static void audio_queue_samples(int16_t* samples, size_t count) {
    if (g_audio_device == 0) {
        audio_set_frequency(g_audio_frequency);
    }
    if (g_audio_device != 0 && samples != nullptr && count > 0) {
        std::vector<int16_t> swapped(count);
        for (size_t i = 0; i < count; i++) {
            uint16_t val = static_cast<uint16_t>(samples[i]);
            swapped[i] = static_cast<int16_t>((val >> 8) | (val << 8));
        }
        SDL_QueueAudio(g_audio_device, swapped.data(), (Uint32)(count * sizeof(int16_t)));
    }
}

static size_t audio_get_frames_remaining() {
    if (g_audio_device == 0) return 0;
    Uint32 bytes_queued = SDL_GetQueuedAudioSize(g_audio_device);
    return bytes_queued / (2 * sizeof(int16_t));
}

int main(int argc, char* argv[]) {
#ifdef _WIN32
    AddVectoredExceptionHandler(1, VectoredCrashHandler);
#endif
    std::set_terminate([]() {
        std::exception_ptr p = std::current_exception();
        if (p) {
            try {
                std::rethrow_exception(p);
            } catch (const std::exception& e) {
                std::cerr << "[CRASH] Exception: " << e.what() << "\n" << std::flush;
            } catch (...) {
                std::cerr << "[CRASH] Non-std exception thrown\n" << std::flush;
            }
        } else {
            std::cerr << "[CRASH] No active exception\n" << std::flush;
        }
        std::abort();
    });

    std::cout << "====================================================\n";
    std::cout << "      Conker's Bad Fur Day - Native PC Port         \n";
    std::cout << "      Recompiled with N64Recomp Technology          \n";
    std::cout << "====================================================\n\n" << std::flush;

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMECONTROLLER | SDL_INIT_EVENTS) != 0) {
        std::cerr << "[SDL Warning] SDL_Init failed: " << SDL_GetError() << "\n" << std::flush;
    }

    std::vector<std::string> candidate_paths;

    if (argc > 1) {
        candidate_paths.push_back(argv[1]);
    }

    candidate_paths.push_back("build/conker.us.z64");
    candidate_paths.push_back("build\\conker.us.z64");
    candidate_paths.push_back("conker.us.z64");
    candidate_paths.push_back("baserom.us.z64");
    candidate_paths.push_back("conker/build/conker.us.z64");
    candidate_paths.push_back("conker\\build\\conker.us.z64");
    candidate_paths.push_back("../build/conker.us.z64");
    candidate_paths.push_back("../baserom.us.z64");

#ifdef _WIN32
    char exe_path[MAX_PATH];
    if (GetModuleFileNameA(NULL, exe_path, MAX_PATH) > 0) {
        std::filesystem::path exe_dir = std::filesystem::path(exe_path).parent_path();
        candidate_paths.push_back((exe_dir / "build" / "conker.us.z64").string());
        candidate_paths.push_back((exe_dir / "conker.us.z64").string());
        candidate_paths.push_back((exe_dir / "baserom.us.z64").string());
        candidate_paths.push_back((exe_dir / ".." / "build" / "conker.us.z64").string());
        candidate_paths.push_back((exe_dir / ".." / "baserom.us.z64").string());
    }
#endif

    std::string found_rom = "";
    std::ifstream rom_file;

    for (const auto& path : candidate_paths) {
        rom_file.open(path, std::ios::binary);
        if (rom_file.is_open()) {
            found_rom = path;
            break;
        }
    }

    if (found_rom.empty()) {
        std::cerr << "[Error] Could not find game ROM (conker.us.z64 or baserom.us.z64).\n";
        std::cerr << "Please ensure build/conker.us.z64 or baserom.us.z64 is present.\n";
        std::cerr << std::flush;
        return 1;
    }

    std::cout << "[Conker] Loading ROM: " << found_rom << " ...\n" << std::flush;
    static std::vector<uint8_t> rom_data((std::istreambuf_iterator<char>(rom_file)), std::istreambuf_iterator<char>());
    
    // Byte-swap ROM (big-endian z64 -> little-endian host words) for N64Recomp memory accesses
    uint32_t* rom32 = reinterpret_cast<uint32_t*>(rom_data.data());
    size_t words = rom_data.size() / 4;
    for (size_t i = 0; i < words; i++) {
        uint32_t w = rom32[i];
        rom32[i] = ((w >> 24) & 0xFF) | ((w >> 8) & 0xFF00) | ((w << 8) & 0xFF0000) | ((w << 24) & 0xFF000000);
    }

    g_rom_data = rom_data.data();
    g_rom_size = rom_data.size();
    std::cout << "[Conker] ROM loaded and byte-swapped successfully (" << (rom_data.size() / 1048576) << " MB).\n" << std::flush;

    // Initialize RDRAM and zero memory
    std::memset(rdram, 0, 0x1000000);

    // Initialize N64 OS boot parameters in RDRAM (0x80000300 - 0x80000320)
    *(uint32_t*)(rdram + 0x300) = 1;          // osTvType: NTSC
    *(uint32_t*)(rdram + 0x304) = 0;          // osRomType: Cart
    *(uint32_t*)(rdram + 0x308) = 0x10000000; // osRomBase
    *(uint32_t*)(rdram + 0x30C) = 0;          // osResetType: Cold
    *(uint32_t*)(rdram + 0x310) = 0x17D9;     // osCicId: 6105 CIC (REQUIRED BY CONKER TO START THREAD 3)
    *(uint32_t*)(rdram + 0x314) = 1;          // osVersion
    *(uint32_t*)(rdram + 0x318) = 0x00800000; // osMemSize: 8 MB

    // Register overlay sections with librecomp
    recomp::overlays::register_overlays(
        recomp::overlays::overlay_section_table_data_t{
            .code_sections = section_table,
            .num_code_sections = sizeof(section_table) / sizeof(section_table[0]),
            .total_num_sections = num_sections
        },
        recomp::overlays::overlays_by_index_t{
            .table = overlay_sections_by_index,
            .len = sizeof(overlay_sections_by_index) / sizeof(overlay_sections_by_index[0])
        }
    );
    recomp::overlays::init_overlays();

    // Map initial executable sections into function lookup table
    load_overlays(0x1000, 0x80001000, 0x280D0);
    load_overlays(0x1000, 0x10001000, 0x280D0);
    load_overlays(0x2D4B0, 0x15000000, 0x1FA130);
    load_overlays(0x2D4B0, 0x80082B20, 0x1FA130);
    load_overlays(0x255880, 0x16000000, 0x004D58);

    // Copy initial boot/code segment to RDRAM (0x10001000 -> offset in RAM)
    // Conker boot loader copies the init segment to 0x80001000 (RAM offset 0x1000)
    if (rom_data.size() >= 0x1000 + 0x280D0) {
        std::memcpy(&rdram[0x1000], &rom_data[0x1000], 0x280D0);
    }
    recomp::set_rom_contents(std::move(rom_data));
    g_rom_data = (uint8_t*)recomp::get_rom().data();
    g_rom_size = recomp::get_rom().size();

    ultramodern::renderer::WindowHandle win_handle{};
#ifdef _WIN32
    // Create native game window
    WNDCLASSA wc = {0};
    wc.lpfnWndProc = WndProc;
    wc.hInstance = GetModuleHandleA(NULL);
    wc.lpszClassName = "ConkerWindowClass";
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    RegisterClassA(&wc);

    HWND hwnd = CreateWindowExA(
        0, "ConkerWindowClass", "Conker's Bad Fur Day - Native Windows Port",
        WS_OVERLAPPEDWINDOW | WS_VISIBLE,
        CW_USEDEFAULT, CW_USEDEFAULT, 1280, 720,
        NULL, NULL, GetModuleHandleA(NULL), NULL
    );

    ShowWindow(hwnd, SW_SHOW);
    UpdateWindow(hwnd);
    std::cout << "[Conker] Native Game Window created successfully (1280x720).\n" << std::flush;
    win_handle.window = hwnd;
    win_handle.thread_id = GetCurrentThreadId();
#endif

    // Register all ultramodern callbacks
    ultramodern::rsp::callbacks_t rsp_callbacks{
        .init = []() {},
        .run_task = [](RDRAM_ARG const OSTask* task) -> bool {
            static int task_count = 0;
            task_count++;
            if (task_count <= 5 || task_count % 60 == 0) {
                std::cout << "[RSP Task #" << task_count << "] type: " << (task ? task->t.type : -1) 
                          << " flags: 0x" << std::hex << (task ? task->t.flags : 0)
                          << " ucode: 0x" << (task ? (uint32_t)task->t.ucode : 0)
                          << " data_ptr: 0x" << (task ? (uint32_t)task->t.data_ptr : 0)
                          << std::dec << "\n" << std::flush;
            }
            return true;
        }
    };

    ultramodern::renderer::callbacks_t render_callbacks{
        .create_render_context = [](uint8_t* rdram_ptr, ultramodern::renderer::WindowHandle wh, bool) -> std::unique_ptr<ultramodern::renderer::RendererContext> {
#ifdef _WIN32
            std::cout << "[Conker] create_render_context callback invoked!\n" << std::flush;
            return std::make_unique<ConkerRendererContext>(rdram_ptr, wh);
#else
            return nullptr;
#endif
        }
    };

    ultramodern::audio_callbacks_t audio_callbacks{
        .queue_samples = audio_queue_samples,
        .get_frames_remaining = audio_get_frames_remaining,
        .set_frequency = audio_set_frequency
    };
    ultramodern::input::callbacks_t input_callbacks{
        .poll_input = []() {},
        .get_input = [](int controller, uint16_t* buttons, float* stick_x, float* stick_y) -> bool {
            if (controller != 0) return false;
            *buttons = 0;
            *stick_x = 0.0f;
            *stick_y = 0.0f;

#ifdef _WIN32
            // A Button (Jump / Select) -> Space or X
            if ((GetAsyncKeyState(VK_SPACE) & 0x8000) || (GetAsyncKeyState('X') & 0x8000)) *buttons |= 0x8000;
            // B Button (Attack / Action) -> C or Z
            if ((GetAsyncKeyState('C') & 0x8000) || (GetAsyncKeyState('Z') & 0x8000)) *buttons |= 0x4000;
            // Z Trigger (Crouch / Zoom) -> Left Shift or Q
            if ((GetAsyncKeyState(VK_LSHIFT) & 0x8000) || (GetAsyncKeyState('Q') & 0x8000)) *buttons |= 0x2000;
            // Start Button (Pause / Menu / Skip) -> Enter or Escape
            if ((GetAsyncKeyState(VK_RETURN) & 0x8000) || (GetAsyncKeyState(VK_ESCAPE) & 0x8000)) *buttons |= 0x1000;
            // D-Pad -> Arrow Keys
            if (GetAsyncKeyState(VK_UP) & 0x8000) *buttons |= 0x0800;
            if (GetAsyncKeyState(VK_DOWN) & 0x8000) *buttons |= 0x0400;
            if (GetAsyncKeyState(VK_LEFT) & 0x8000) *buttons |= 0x0200;
            if (GetAsyncKeyState(VK_RIGHT) & 0x8000) *buttons |= 0x0100;
            // Triggers -> Tab (L) / E (R)
            if (GetAsyncKeyState(VK_TAB) & 0x8000) *buttons |= 0x0020;
            if (GetAsyncKeyState('E') & 0x8000) *buttons |= 0x0010;
            // C-Buttons (Camera) -> I, K, J, L
            if (GetAsyncKeyState('I') & 0x8000) *buttons |= 0x0008;
            if (GetAsyncKeyState('K') & 0x8000) *buttons |= 0x0004;
            if (GetAsyncKeyState('J') & 0x8000) *buttons |= 0x0002;
            if (GetAsyncKeyState('L') & 0x8000) *buttons |= 0x0001;

            // Analog Stick -> W / A / S / D
            if (GetAsyncKeyState('W') & 0x8000) *stick_y += 1.0f;
            if (GetAsyncKeyState('S') & 0x8000) *stick_y -= 1.0f;
            if (GetAsyncKeyState('D') & 0x8000) *stick_x += 1.0f;
            if (GetAsyncKeyState('A') & 0x8000) *stick_x -= 1.0f;
#endif
            return true;
        },
        .set_rumble = [](int, bool) {},
        .get_connected_device_info = [](int controller) -> ultramodern::input::connected_device_info_t {
            if (controller == 0) {
                return { ultramodern::input::Device::Controller, ultramodern::input::Pak::RumblePak };
            }
            return { ultramodern::input::Device::None, ultramodern::input::Pak::None };
        }
    };
    ultramodern::gfx_callbacks_t gfx_callbacks{};
    ultramodern::events::callbacks_t events_callbacks{};
    ultramodern::error_handling::callbacks_t error_handling_callbacks{
        .message_box = [](const char* msg) {
            fprintf(stderr, "[Ultramodern Error] %s\n", msg ? msg : "null");
            fflush(stderr);
        }
    };
    ultramodern::threads::callbacks_t threads_callbacks{};

    ultramodern::set_callbacks(
        rsp_callbacks,
        render_callbacks,
        audio_callbacks,
        input_callbacks,
        gfx_callbacks,
        events_callbacks,
        error_handling_callbacks,
        threads_callbacks
    );

    ultramodern::MessageQueueControl mqc{
        .requeue_timer = true,
        .requeue_sp = true,
        .requeue_si = true,
        .requeue_ai = true,
        .requeue_vi = true,
        .requeue_pi = true,
        .requeue_dp = true
    };
    ultramodern::set_message_queue_control(mqc);

    try {
        recomp::GameEntry game_entry{};
        game_entry.game_id = u8"conker";
        game_entry.display_name = "Conker's Bad Fur Day";
        game_entry.mod_game_id = "";
        game_entry.save_type = recomp::SaveType::AllowAll;
        game_entry.is_enabled = true;
        game_entry.entrypoint_address = 0x10001000;
        game_entry.entrypoint = recomp_entrypoint;
        game_entry.on_init_callback = [](uint8_t* rdram_ptr, recomp_context*) {
            *(uint32_t*)&rdram_ptr[0x300] = 1; // osTvType: NTSC
            *(uint32_t*)&rdram_ptr[0x308] = 0; // osRomBase
            *(uint32_t*)&rdram_ptr[0x30C] = 0; // osResetType
            *(uint32_t*)&rdram_ptr[0x310] = 0x17D9; // osCicType: CIC-6105 magic check required by Conker boot
            *(uint32_t*)&rdram_ptr[0x318] = 0x00800000; // osMemSize: 8 MB
        };
        recomp::register_game(game_entry);
        recomp::start_game(u8"conker", "");
        std::cout << "[Conker] Game registered with N64Recomp runtime.\n" << std::flush;
    } catch (const std::exception& e) {
        std::cerr << "[Conker] Exception registering game: " << e.what() << "\n" << std::flush;
    }

    // Initialize modern runtime subsystems
    std::cout << "[Conker] Initializing ultramodern subsystems...\n" << std::flush;
    try {
        ultramodern::preinit(rdram, win_handle);
        std::cout << "[Conker] Subsystems initialized and game engine active.\n" << std::flush;
    } catch (const std::exception& e) {
        std::cerr << "[Conker] Exception in preinit: " << e.what() << "\n" << std::flush;
    }

    std::cout << "[Conker] Spawning game start execution thread...\n" << std::flush;
    std::thread game_thread([rdram]() {
        ultramodern::set_native_thread_name("Game Start Thread");
        recomp_context context{};
        try {
            while (!recomp::wait_for_game_started(rdram, &context)) {}
        } catch (const ultramodern::thread_terminated&) {
            std::cout << "[Conker] Entrypoint yielded to OS threads.\n" << std::flush;
        } catch (const std::exception& e) {
            std::cerr << "[Conker] Exception in game start thread: " << e.what() << "\n" << std::flush;
        } catch (...) {
            std::cerr << "[Conker] Unknown exception in game start thread\n" << std::flush;
        }

        while (true) {
            std::this_thread::sleep_for(std::chrono::hours(24));
        }
    });

#ifdef _WIN32
    // Windows Event Pump - Runs continuously until user closes window
    std::cout << "[Conker] Entering main window event pump (active)...\n" << std::flush;
    MSG msg;
    while (GetMessageA(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
#endif

    g_running = false;
    ultramodern::quit();
    if (game_thread.joinable()) {
        game_thread.join();
    }

    std::cout << "[Conker] Native execution finished.\n" << std::flush;
    return 0;
}
