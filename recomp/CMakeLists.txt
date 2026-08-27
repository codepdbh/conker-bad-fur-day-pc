cmake_minimum_required(VERSION 3.20)
project(ConkerPC C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(RT64_STATIC ON CACHE BOOL "" FORCE)
add_subdirectory(rt64)
add_subdirectory(N64ModernRuntime)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/recompiled
    ${CMAKE_CURRENT_SOURCE_DIR}/../tools/N64Recomp/include
    ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime/ultramodern/include
    ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime/librecomp/include
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/hle
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/plume
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/plume/contrib/volk
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/plume/contrib/Vulkan-Headers/include
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/plume/contrib/VulkanMemoryAllocator/include
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/hlslpp/include
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/imgui
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/mupen64plus-core/src/api
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/mupen64plus-win32-deps/SDL2-2.26.3/include
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/nativefiledialog-extended/src/include
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/dxc/inc
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/zstd/build/cmake/lib
    ${CMAKE_CURRENT_SOURCE_DIR}/build_win/src
)

link_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/mupen64plus-win32-deps/SDL2-2.26.3/lib/x64
)

file(GLOB RECOMPILED_C_SOURCES "src/recompiled/*.c")
file(GLOB RECOMPILED_CPP_SOURCES "src/recompiled/*.cpp")

add_executable(Conker
    src/main.cpp
    src/runtime_stubs.cpp
    ${RECOMPILED_C_SOURCES}
    ${RECOMPILED_CPP_SOURCES}
)

target_link_libraries(Conker PRIVATE
    rt64
    librecomp
    ultramodern
    ${CMAKE_CURRENT_SOURCE_DIR}/rt64/src/contrib/mupen64plus-win32-deps/SDL2-2.26.3/lib/x64/SDL2.lib
)

target_compile_definitions(Conker PRIVATE
    FFX_GCC
    HLSL_CPU
    IMGUI_IMPL_VULKAN_NO_PROTOTYPES
    NOMINMAX
    __PRFCHWINTRIN_H
)

if (WIN32)
    target_link_libraries(Conker PRIVATE ws2_32 winmm shcore shlwapi ole32 uuid dwmapi -static -static-libgcc -static-libstdc++)
endif()

if (CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
    target_compile_options(Conker PRIVATE -frounding-math -Wno-unused-value -Wno-unused-variable -Wno-parentheses)
endif()
