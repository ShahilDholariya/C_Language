#include <stdio.h>
int main()
{
    int a[5] = {1, 23, 11, 2, 22};
    int sum = 0;
    int *p; // Declare Pointer variable
    printf("sum of my array is :");
    for (p = &a[0]; p < &a[5]; p++)
    {
        sum = sum + *p; // perform sum operation
    }
    printf("%d", sum);
    printf("\n");
    return 0;
}