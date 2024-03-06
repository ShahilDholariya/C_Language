#include <stdio.h>
// Define a structure to represent key-value
struct KeyValue
{
    int input;
    int square;
};
// Lookup table as an array of structures
struct KeyValue squareLookupTable[] = {
    {0, 0},
    {1, 1},
    {2, 4},
    {3, 9},
    {4, 16},
    {5, 25}};
int getSquare(int number)
{
    for (size_t i = 0; i < sizeof(squareLookupTable) / sizeof(squareLookupTable[0]); i++)
    {
        if (squareLookupTable[i].input == number)
        {
            return squareLookupTable[i].square;
        }
    }
    return -1;
}

int main()
{
    // Test the lookup table
    int inputNumber = 3;
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
