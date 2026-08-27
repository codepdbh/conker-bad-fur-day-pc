@echo off
setlocal
echo ====================================================
echo   Launching Conker's Bad Fur Day - Native Windows Port
echo ====================================================

if exist Conker.exe (
    Conker.exe build\conker.us.z64
) else if exist recomp\build_win\Conker.exe (
    recomp\build_win\Conker.exe build\conker.us.z64
) else (
    echo [ERROR] Conker.exe not found! Run build_native.bat first.
)

endlocal
