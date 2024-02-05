#include <stdio.h>
#include <string.h>
void foo(char *a)
{
    if (*a && *a != ' ')
    {
        foo(a + 1);
        putchar(*a);
    }
}
void main()
{
    char *a = "ABCD EFGH";
    foo(a);
    printf("\n");
}