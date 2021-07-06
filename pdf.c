#include <stdio.h>

int main(int argc, char *argv[])
{
    // Check for proper usage
    if (argc != 2)
    {
        printf("Usage: ./pdf filename\n");
        return 1;
    }

    // TODO: check if file is a PDF
    // Every PDF begins with the first five bytes: 0x25 0x50 0x44 0x46 0x2d
}
