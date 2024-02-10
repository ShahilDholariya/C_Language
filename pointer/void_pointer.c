#include <stdio.h>
int main()
{
    int n = 10;
    void *ptr = &n;              // Declare void pointer
    printf("%d\n", *(int *)ptr); // typecasting of pointer to integer
    return 0;
}