#include <stdio.h>
// Lookup table representing the squares
int squareLookupTable[] = {0, 1, 4, 9, 16, 25};
int getSquare(int number)
{
    if (number >= 0 && number <= 5)
    {
        return squareLookupTable[number];
    }
    else
    {
        return -1;
    }
}

int main()
{
    int inputNumber;
    printf("Enter the number:");
    scanf("%d", &inputNumber);
    int result = getSquare(inputNumber);

    if (result != -1)
    {
        printf("Square of %d is %d\n", inputNumber, result);
    }
    else
    {
        printf("Input number %d is outside the range of the lookup table\n", inputNumber);
    }

    return 0;
}
