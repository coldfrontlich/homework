#include <iostream>
#include "BmpStructures.h"
#include "ImgFunctions.h"


void perevorot(const char* inpic = "rainbow.bmp", const char* outpic = "perevorot.bmp", int ygol = 90)
{
    RgbImg inimg = readRgbImg(inpic);
    size_t height = inimg.height, width = inimg.width;
    if (ygol % 90 != 0)
    {
        std::cout << "ygol dolzhen na 90 delitsya\n";
    }
    else {
        if (ygol == 90)
        {
            RgbImg outimg = createRgbImg(width, height, { 0, 0, 0 });
            for (size_t x = 0; x < width; x++)
            {
                for (size_t y = 0; y < height; y++)
                {
                    outimg.pixels[y][x] = inimg.pixels[width - x - 1][y];
                }
            }
            writeRgbImg(outpic, outimg);
            deleteRgbImg(inimg);
            deleteRgbImg(outimg);
        }
        else if (ygol == 180) {
            RgbImg ouimg = createRgbImg(width, height, { 0, 0, 0 });
            for (size_t x = 0; x < width; x++)
            {
                for (size_t y = 0; y < height; y++)
                {
                    ouimg.pixels[y][x] = inimg.pixels[width - x - 1][height - y - 1];
                }
            }
            writeRgbImg(outpic, ouimg);
            deleteRgbImg(inimg);
            deleteRgbImg(ouimg);
        }
        else if (ygol== 270) {
            RgbImg outimg = createRgbImg(height, width, { 0, 0, 0 });
            for (size_t x = 0; x < width; x++)
            {
                for (size_t y = 0; y < height; y++)
                {
                    outimg.pixels[x][height - 1 - y] = inimg.pixels[y][x];
                }
            }
            writeRgbImg(outpic, outimg);
            deleteRgbImg(inimg);
            deleteRgbImg(outimg);
        }
    }
}

int main()
{
    try
    {
        perevorot("rainbow.bmp","out.bmp", 180);
    }
    catch (std::exception const& e)
    {
        std::cout << "Error: " << e.what() << "\n";
        return -1;
    }
    return 0;
}