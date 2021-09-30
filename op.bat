@echo off
cd semestr1
cd osnov_prog
set /p something=
echo >> %date%.log
echo %something% >> %date%.log
cd ..\..