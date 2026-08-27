
//;
// RT64
//

#if defined(_WIN32)

#include "rt64_shader_compiler.h"

#include "common/rt64_common.h"

namespace RT64 {
    // ShaderCompiler

    static const GUID IID_IDxcCompiler_Guid = { 0x8c210bf3, 0x011f, 0x4422, { 0x8d, 0x70, 0x6f, 0x9a, 0xc8, 0xdc, 0x51, 0x27 } };
    static const GUID IID_IDxcUtils_Guid = { 0x4605c4cb, 0x2019, 0x492a, { 0xad, 0xa4, 0x65, 0xf2, 0x0b, 0xb7, 0xd6, 0x7f } };
    static const GUID IID_IDxcLinker_Guid = { 0xf1b5be2a, 0x62dd, 0x4327, { 0xa1, 0xc2, 0x42, 0xac, 0x1e, 0x1e, 0x78, 0xe6 } };
    static const GUID CLSID_DxcCompiler_Guid = { 0x73e22d93, 0xe6ce, 0x47f3, { 0xb5, 0xbf, 0xf0, 0x66, 0x4f, 0x39, 0xc1, 0x88 } };
    static const GUID CLSID_DxcUtils_Guid = { 0x6245d6af, 0x66e0, 0x48fd, { 0x80, 0xb4, 0x4d, 0x27, 0x17, 0x96, 0x74, 0x8c } };
    static const GUID CLSID_DxcLinker_Guid = { 0xef6a808e, 0xb0cc, 0x4d56, { 0xa4, 0x45, 0x5c, 0x3c, 0x66, 0x72, 0x04, 0xcd } };

    static DxcCreateInstanceProc GetDxcCreateInstance() {
        static HMODULE hDxc = LoadLibraryA("dxcompiler.dll");
        if (hDxc == nullptr) {
            return nullptr;
        }
        return (DxcCreateInstanceProc)GetProcAddress(hDxc, "DxcCreateInstance");
    }

    ShaderCompiler::ShaderCompiler() {
        DxcCreateInstanceProc createProc = GetDxcCreateInstance();
        if (createProc == nullptr) {
            return;
        }

        HRESULT res = createProc(CLSID_DxcCompiler_Guid, IID_IDxcCompiler_Guid, (void **)(&dxcCompiler));
        if (FAILED(res)) {
            fprintf(stderr, "DxcCreateInstance(DxcCompiler) failed with error code 0x%lX.\n", res);
            return;
        }

        res = createProc(CLSID_DxcUtils_Guid, IID_IDxcUtils_Guid, (void **)(&dxcUtils));
        if (FAILED(res)) {
            fprintf(stderr, "DxcCreateInstance(DxcUtils) failed with error code 0x%lX.\n", res);
            return;
        }
    }

    ShaderCompiler::~ShaderCompiler() {
        if (dxcCompiler != nullptr) {
            dxcCompiler->Release();
        }

        if (dxcUtils != nullptr) {
            dxcUtils->Release();
        }
    }

    static void checkResultForError(IDxcOperationResult *result) {
        HRESULT resultCode;
        result->GetStatus(&resultCode);
        if (FAILED(resultCode)) {
            IDxcBlobEncoding *error;
            HRESULT hr = result->GetErrorBuffer(&error);
            if (FAILED(hr)) {
                throw std::runtime_error("Failed to get shader compiler error");
            }

            // Convert error blob to a string.
            std::vector<char> infoLog(error->GetBufferSize() + 1);
            memcpy(infoLog.data(), error->GetBufferPointer(), error->GetBufferSize());
            infoLog[error->GetBufferSize()] = 0;

            RT64_LOG_PRINTF("Shader compilation error: %s\n", infoLog.data());
            throw std::runtime_error("Shader compilation error: " + std::string(infoLog.data()));
        }
    }

    void ShaderCompiler::compile(const std::string &shaderCode, const std::wstring &entryName, const std::wstring &profile,
        RenderShaderFormat shaderFormat, IDxcBlob **shaderBlob) const
    {
        if (dxcUtils == nullptr || dxcCompiler == nullptr) return;
        IDxcBlobEncoding *textBlob = nullptr;
        HRESULT res = dxcUtils->CreateBlobFromPinned((LPBYTE)shaderCode.c_str(), (uint32_t)shaderCode.size(), DXC_CP_ACP, &textBlob);
        if (FAILED(res)) {
            fprintf(stderr, "CreateBlobFromPinned failed with error code 0x%lX.\n", res);
            return;
        }

        std::vector<LPCWSTR> arguments;
        arguments.push_back(L"-Qstrip_debug");

        switch (shaderFormat) {
        case RenderShaderFormat::DXIL:
            arguments.push_back(L"-Qstrip_reflect");
            break;
        case RenderShaderFormat::SPIRV:
            arguments.push_back(L"-spirv");
            arguments.push_back(L"-fvk-use-dx-layout");

            if (profile.find(L"vs") != std::wstring::npos) {
                arguments.push_back(L"-fvk-invert-y");
            }
            else if (profile.find(L"lib") != std::wstring::npos) {
                arguments.push_back(L"-fspv-target-env=vulkan1.1spirv1.4");
                arguments.push_back(L"-fspv-extension=SPV_KHR_ray_tracing");
            }

            break;
        default:
            assert(false && "Unknown shader format.");
            return;
        }

        IDxcOperationResult *result = nullptr;
        dxcCompiler->Compile(textBlob, L"", entryName.c_str(), profile.c_str(), arguments.data(), (UINT32)(arguments.size()), nullptr, 0, nullptr, &result);
        checkResultForError(result);
        result->GetResult(shaderBlob);
        textBlob->Release();
    }

    void ShaderCompiler::link(const std::wstring &entryName, const std::wstring &profile, IDxcBlob **libraryBlobs,
        const wchar_t **libraryBlobNames, uint32_t libraryBlobCount, IDxcBlob **shaderBlob) const 
    {
        DxcCreateInstanceProc createProc = GetDxcCreateInstance();
        if (createProc == nullptr) {
            return;
        }

        IDxcLinker *dxcLinker = nullptr;
        HRESULT res = createProc(CLSID_DxcLinker_Guid, IID_IDxcLinker_Guid, (void **)(&dxcLinker));
        if (FAILED(res)) {
            fprintf(stderr, "DxcCreateInstance(DxcLinker) failed with error code 0x%lX.\n", res);
            return;
        }

        for (uint32_t i = 0; i < libraryBlobCount; i++) {
            res = dxcLinker->RegisterLibrary(libraryBlobNames[i], libraryBlobs[i]);
            if (FAILED(res)) {
                fprintf(stderr, "RegisterLibrary failed with error code 0x%lX.\n", res);
                return;
            }
        }

        IDxcOperationResult *result = nullptr;
        dxcLinker->Link(entryName.c_str(), profile.c_str(), libraryBlobNames, libraryBlobCount, nullptr, 0, &result);
        checkResultForError(result);
        result->GetResult(shaderBlob);
        dxcLinker->Release();
    }
};

#endif
