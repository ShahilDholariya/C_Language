#include <stdio.h>
int main()
{
    int size, i, j, temp;
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

    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (a[i] > a[j]) // swap if condition true
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Ascending order of my array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}