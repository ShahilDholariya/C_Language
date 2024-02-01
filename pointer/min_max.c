#include <stdio.h>

void minmax(int *min, int *max, int size, int *a)
{
    *min = a[0];
    printf("%d",*min);
    *max = a[0];
     printf("%d",*max);
    for (int i = 1; i < size; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
        else if (a[i] < *min)
        {
            *min = a[i];
        }
    }
}
void main()
{
    int size, i, min, max;

    printf("Enter the size of my array:\n");
    scanf("%d", &size);
    int a[size];
    printf("Enter the element of array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("My array is:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    minmax(&min, &max, size, a);
    printf("Max number of my array is: %d\n", max);
    printf("Min number of my array is: %d\n", min);
}