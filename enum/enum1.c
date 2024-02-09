#include <stdio.h>

// Define an enumeration
enum Color
{
    RED,
    GREEN,
    BLUE
};

int main()
{
    // Declare a variable of type enum Color
    enum Color mycolor = GREEN;

    if (mycolor == RED)
    {
        printf("The color is red\n");
    }
    else if (mycolor == GREEN)
    {
        printf("The color is green\n");
    }
    else if (mycolor == BLUE)
    {
        printf("The color is blue\n");
    }

    return 0;
}
