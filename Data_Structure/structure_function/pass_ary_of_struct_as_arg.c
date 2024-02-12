#include <stdio.h>
typedef struct
{
    int a;
    char b;
} A_t;

void pass(A_t a[2]) // Pass Array of Structure as argument in Function
{
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("%d %c\n", a[i].a, a[i].b);
    }
}

int main()
{
    A_t arr[2] = {{1, 'A'}, {2, 'B'}};
    pass(arr);
    return 0;
}