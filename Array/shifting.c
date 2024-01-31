#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your Array is:");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = % d\r\n", i, arr[i]);
    }

    printf("\nReverse Array is:\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("arr[%d] = %d\r\n", i, arr[i]);
    }

    printf("\nAgain Reverse array:\r\n");
    arr[0] = arr[size];
    for (int i = 1; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nFinal Array is :\r\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\r\n");
}