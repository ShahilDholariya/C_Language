#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr = &a[0];

    printf("Array element using pointer :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr++);
    }
    printf("\n");
}