@echo off
md %1 
cd %1
md Algebra_and_Geometry
cd Algebra_and_Geometry
echo Погожев Сергей Владимирович >> readme.txt
echo Начало занятий:%date% >> readme.txt
cd ..
md Math_analiz
cd Math_analiz
echo Платонов Алексей Викторович >> readme.txt
echo Начало занятий:%date% >> readme.txt
cd ..
md Osnov_prog
cd Osnov_prog
echo Погожев Сергей Владимирович >> readme.txt
echo Начало занятий:%date% >> readme.txt
cd ..
md Diskret_math
cd Diskret_math
echo Погожев Сергей Владимирович >> readme.txt
echo Начало занятий:%date% >> readme.txt
cd ..\..
copy algem.bat semestr1
copy op.bat semestr1
