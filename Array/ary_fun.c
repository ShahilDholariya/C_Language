#include <stdio.h>

void printArraySize(int arr[5])
{
    // size of pointer not full array
    printf("Size of array in function: %ld\n", sizeof(arr[0]));
}

int main()
{
    int myArray[5];

    // size of the entire array
    printf("Size of array in main: %ld\n", sizeof(myArray));

    // Pass the array to the function
    printArraySize(myArray);

    return 0;
}
