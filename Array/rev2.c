#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    printf("My Array is: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = % d\r\n", i, a[i]);
    }

    b[0] = a[4];
    b[1] = a[3];
    b[2] = a[2];
    b[3] = a[1];
    b[4] = a[0];
    printf("\nMy Reverse array is:\n");
    for (int i = 0; i < 5; i++)
    {
         printf("b[%d] = % d\r\n", i, b[i]);
    }
}