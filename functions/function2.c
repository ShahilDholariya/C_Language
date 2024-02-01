#include <stdio.h>

int fun(int num)
{
    int count = 2;
    while (num)
    {
        count++;
        num >>= 2;
    }
    return (count);
}
void main()
{
    int s;
    s = fun(435);
    printf("%d", s);
    printf("\n");
}