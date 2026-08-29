@echo off
setlocal
echo ====================================================
echo   Building Conker's Bad Fur Day - Native Windows Port
echo ====================================================

docker run --rm -v "%cd%:/conker" -w /conker conker bash -c "tools/N64Recomp/build/N64Recomp tools/recomp/conker_recomp.toml && python3 tools/recomp/patch_generated.py && cd recomp && cmake -S . -B build_win --fresh -DCMAKE_SYSTEM_NAME=Windows -DCMAKE_C_COMPILER=x86_64-w64-mingw32-gcc -DCMAKE_CXX_COMPILER=x86_64-w64-mingw32-g++ -G Ninja && cmake --build build_win --target Conker"

if %ERRORLEVEL% EQU 0 (
    echo.
    echo ====================================================
    echo   [SUCCESS] Conker.exe built successfully!
    echo   Executable located at: recomp\build_win\Conker.exe
    echo ====================================================
    copy /Y recomp\build_win\Conker.exe Conker.exe >nul
) else (
    echo.
    echo [ERROR] Build failed! Check compiler output.
    exit /b 1
)

endlocal
