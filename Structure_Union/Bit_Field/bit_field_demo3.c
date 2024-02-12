#include <stdio.h>

// Define a bitfield structure for RGB color
typedef struct
{
    unsigned int red : 8;
    unsigned int green : 8;
    unsigned int blue : 8;
} RGBColor_t;

int main()
{
    // Set RGB values for a color
    RGBColor_t color;
    color.red = 255;
    color.green = 128;
    color.blue = 0;

    // printf("%ld\n", sizeof(RGBColor_t));

    printf("Red: %u\n", color.red);
    printf("Green: %u\n", color.green);
    printf("Blue: %u\n", color.blue);

    return 0;
}
