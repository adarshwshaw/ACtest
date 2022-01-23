@echo off
setlocal
call vcvarsall.bat x64
mkdir bin
pushd bin
del /Q *
cl /c ../src/*.c /Zi
cl /Zi /Fe:act.exe ../test/*.c ./*.obj 
del *.obj
act.exe
popd
endlocal
