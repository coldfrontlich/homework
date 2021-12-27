#include <iostream>
#include "BmpStructures.h"
#include "ImgFunctions.h"

void grey(const char* inpic = "rainbow.bmp", const char* outpic = "grey_rainbow.bmp")
{
    RgbImg inimg = readRgbImg(inpic);
    RgbImg outimg = createRgbImg(inimg.height,inimg.width, { 0,0,0 });
    double r;
    for (int i = 0; i < inimg.height; ++i)
        for (int j = 0; j < inimg.width; ++j)
        {
            r = (inimg.pixels[i][j].Red + inimg.pixels[i][j].Green + inimg.pixels[i][j].Blue) / 3;
            outimg.pixels[i][j].Red = outimg.pixels[i][j].Green = outimg.pixels[i][j].Blue = r;
        }
    writeRgbImg(outpic, outimg);
    deleteRgbImg(inimg);
    deleteRgbImg(outimg);
}
int main()
{
    try
    {
        grey();
    }
    catch (std::exception const& e)
    {
        std::cout << "Error: " << e.what() << "\n";
        return -1;
    }
    return 0;
}