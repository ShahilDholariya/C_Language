#include <stdio.h>

int main()
{

    int a[10] = {1, 2, 3};
    int ele = 5;
    for (int i = 3; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = ele;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}