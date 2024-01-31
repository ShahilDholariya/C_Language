#include <stdio.h>
int main()
{
    int a[5] = {20, 12, 99, 78, 67};
    int temp, i, j;

    printf("My Array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSorting Array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}