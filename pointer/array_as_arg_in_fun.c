#include <stdio.h>
void printarray(int *arr, int size);

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(a) / sizeof(a[0]);

    printarray(a, arraySize); // Call the function and pass the array

    return 0;
}

// Function definition
void printarray(int b[], int size)  
{
    printf("Array elements are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");
}
