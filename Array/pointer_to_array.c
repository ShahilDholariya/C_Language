#include <stdio.h>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};

    // Declare a pointer to an array of integers
    int(*ptrToArray)[5] = &numbers;

    printf("Values using pointer to array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", (*ptrToArray)[i]);
    }
    printf("\n");

    return 0;
}
