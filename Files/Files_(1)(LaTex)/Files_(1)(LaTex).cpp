//Дан текстовый файл, в котором математические формулы представлены в формате TeX и заключены в $...$ или $$...$$. Заменить блоки на <math>...</math>.
//Имена входного и выходного файлов в командной строке.
#include <iostream>
#include <fstream>

int main(int argc, const char* argv[])
{

    if (argc < 3)
    {
        std::cout << "Wrong input\n";
        std::cout << "Usage: Files inFile_name, outFile_name\n";
        return 1;
    }
    std::ifstream in(argv[1]);
    if (!in.is_open())
    {
        std::cout << "Input file open error \n";
        return 2;
    }
    else {
        std::cout << "Input file opened\n";
    }
    std::ofstream out(argv[2]);
    if (!out.is_open())
    {
        std::cout << "Output file open error \n";
        return 3;
    }
    else {
        std::cout << "Output file opened\n";
    }
    char c;
    int k = 0;
    while ((c = in.get()) != EOF)
    {
        if ((c == '$') and (in.peek() == '$') and (k % 2 == 0))
        {
            out << "<math>";
            c = in.get();
            c = in.get();
            ++k;
        }
        else if ((c == '$') and (in.peek() == '$') and (k % 2 != 0))
        {
            out << "</math>";
            c = in.get();
            c = in.get();
            ++k;
        }
        if ((c == '$') and (in.peek() != '$') and (k % 2 == 0))
        {
            out << "<math>";
            c = in.get();
            ++k;
        }
        else if ((c == '$') and (in.peek() != '$') and (k % 2 != 0))
        {
            out << "</math>";
            c = in.get();
            ++k;
        }
        out << c;
    }
    out.close();
    in.close();
    std::cout << "Files are closed successfully";
    return 0;
}
