@echo off
setlocal

set SCRIPT_DIR=%~dp0
cd /d "%SCRIPT_DIR%"

if "%1"=="" goto build_rom
if "%1"=="rom" goto build_rom
if "%1"=="code" goto build_code
if "%1"=="extract" goto extract
if "%1"=="clean" goto clean
if "%1"=="diff" goto diff

:build_rom
echo [Conker] Reemplazando binarios y construyendo ROM final (build\conker.us.z64)...
docker run --rm -v "%CD%:/conker" conker bash -c "make -C conker replace && make --jobs"
goto end

:build_code
echo [Conker] Compilando codigo C del juego...
docker run --rm -v "%CD%:/conker" -w /conker/conker conker make
goto end

:extract
echo [Conker] Extrayendo assets y codigo de la ROM base...
docker run --rm -v "%CD%:/conker" conker make extract
docker run --rm -v "%CD%:/conker" conker make -C conker extract
goto end

:diff
if "%2"=="" (
    echo Uso: build.bat diff ^<nombre_funcion^>
    goto end
)
docker run --rm -v "%CD%:/conker" -w /conker/conker conker python3 ../tools/asm-differ/diff.py --format color %2
goto end

:clean
echo [Conker] Limpiando archivos de compilacion...
docker run --rm -v "%CD%:/conker" conker make really-clean
goto end

:end
endlocal
