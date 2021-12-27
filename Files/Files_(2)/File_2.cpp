#include <iostream>
#include <fstream>
#include <iomanip>

int main(int argc, const char* argv[]) {
    if (argc < 3)
    {
        std::cout << "Wrong input\n";
        std::cout << "Usage: Files inFile_name, outFile_name\n";
        return 1;
    }

    std::ifstream in(argv[1]);
    if (!in.is_open())
    {
        std::cout << "Input file error \n";
        return 2;
    }
    else {
        std::cout << "Input file have been opened\n";
    }
    std::ofstream out(argv[2]);
    if (!out.is_open())
    {
        std::cout << "Output file error \n";
        return 3;
    }
    else {
        std::cout << "Output file have been opened too\n";
    }
    unsigned char c;
    std::string str_output = "";
    int count = 0, global_count = 0;
    while ((c = in.get()) != (unsigned char)EOF)
    {
        if (count == 0)
            out << std::setfill('0') << std::setw(10) << std::hex << 16 * global_count << ": ";

        if (c >= 32)
        {
            str_output += c;
            out << std::setfill('0') << std::setw(2) << std::hex << (unsigned int)c << " ";
        }
        else if (c != 10)
        {
            str_output += c;
            out << " . ";
        }
        count++;

        if (count == 8)
            out << " |  ";
        else if (count == 15) {
            out << "  " + str_output << std::endl;
            count = 0;
            str_output = "";
            global_count++;
        }
    }
    if (count != 0) {
        while (count < 15)
        {
            out << "  ";
            if (count == 7)
                out << " |  ";

            count++;
        }
        out << "  " + str_output << std::endl;
    }
    in.close();
    out.close();
    std::cout << "That's all,check outfile.txt\n";
}

