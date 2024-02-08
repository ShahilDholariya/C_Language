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
    enum Color myColor = GREEN;

    if (myColor == RED)
    {
        printf("The color is red\n");
    }
    else if (myColor == GREEN)
    {
        printf("The color is green\n");
    }
    else if (myColor == BLUE)
    {
        printf("The color is blue\n");
    }

    return 0;
}
