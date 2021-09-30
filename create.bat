@echo off
md %1 
cd %1
md Algebra_and_Geometry
cd Algebra_and_Geometry
echo Ïîãîæåâ Ñåðãåé Âëàäèìèðîâè÷ >> readme.txt
echo Íà÷àëî çàíÿòèé:%date% >> readme.txt
cd ..
md Math_analiz
cd Math_analiz
echo Ïëàòîíîâ Àëåêñåé Âèêòîðîâè÷ >> readme.txt
echo Íà÷àëî çàíÿòèé:%date% >> readme.txt
cd ..
md Osnov_prog
cd Osnov_prog
echo Ïîãîæåâ Ñåðãåé Âëàäèìèðîâè÷ >> readme.txt
echo Íà÷àëî çàíÿòèé:%date% >> readme.txt
cd ..
md Diskret_math
cd Diskret_math
echo Ïîãîæåâ Ñåðãåé Âëàäèìèðîâè÷ >> readme.txt
echo Íà÷àëî çàíÿòèé:%date% >> readme.txt
cd ..\..
copy algem.bat %1
copy op.bat %1
