@echo off
setlocal

set SCRIPT_DIR=%~dp0
cd /d "%SCRIPT_DIR%"

set ROM_PATH=%SCRIPT_DIR%build\conker.us.z64

if not exist "%ROM_PATH%" (
    echo [Conker] La ROM no existe aun. Compilandola...
    call "%SCRIPT_DIR%build.bat" rom
)

if not exist "%ROM_PATH%" (
    echo [Error] No se pudo generar %ROM_PATH%
    exit /b 1
)

echo [Conker] Ejecutando ROM compilada: %ROM_PATH%

:: 1. Verificar Project64
if exist "%ProgramFiles%\Project64 3.0\Project64.exe" (
    start "" "%ProgramFiles%\Project64 3.0\Project64.exe" "%ROM_PATH%"
    goto done
)
if exist "%ProgramFiles(x86)%\Project64 2.3\Project64.exe" (
    start "" "%ProgramFiles(x86)%\Project64 2.3\Project64.exe" "%ROM_PATH%"
    goto done
)

:: 2. Verificar Ares
if exist "%LOCALAPPDATA%\ares\ares.exe" (
    start "" "%LOCALAPPDATA%\ares\ares.exe" "%ROM_PATH%"
    goto done
)

:: 3. Verificar RetroArch
if exist "%APPDATA%\RetroArch\retroarch.exe" (
    start "" "%APPDATA%\RetroArch\retroarch.exe" -L mupen64plus_next "%ROM_PATH%"
    goto done
)

:: 4. Abrir con el visor/emulador predeterminado de Windows
echo [Info] Abriendo con la aplicacion asociada de Windows...
start "" "%ROM_PATH%"

:done
endlocal
