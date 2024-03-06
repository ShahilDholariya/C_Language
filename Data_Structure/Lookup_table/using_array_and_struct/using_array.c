#include <stdio.h>

int square(int x) // Create a function for determine the squre of numbers
{
    return x * x;
}

int main()
{
    int Lookup_table[10]; // Create a simple lookup table

    for (int i = 0; i < 10; i++)
    {
        Lookup_table[i] = square(i);
    }

    for (int i = 0; i < 10; i++) // Use the lookup table
    {
        printf("Square of %d is = %d\n", i, Lookup_table[i]);
    }
    return 0;
}
