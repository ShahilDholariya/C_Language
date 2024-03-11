#include <stdio.h>
int *fun()
{
    int n = 10;
    return &n;
}
int main()
{
    int *ptr = NULL;
    ptr = fun();
    printf("%d\n", *ptr);
    return 0;
}