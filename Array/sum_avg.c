#include <stdio.h>
int main()
{
    int size;
    int sum = 0;
    float avg;
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your Array is:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n Sum of array is:");
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];            // Find sum of array
        avg = sum / sizeof(arr[size]); // find average of sum
    }
    printf("%d ", sum);
    printf("\n Average of sum is:");
    printf("%f\n", avg);

}