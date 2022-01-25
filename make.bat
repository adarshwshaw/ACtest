@echo off
setlocal
call vcvarsall.bat x64
mkdir bin
pushd bin
del /Q *
@REM debug
@REM cl /c ../src/*.c /Zi
@REM cl /Zi /Fe:act.exe ../test/*.c ./*.obj 
cl /c ../src/*.c
lib /out:actest_0.1.lib *.obj
del *.obj
@REM act.exe
popd
endlocal
