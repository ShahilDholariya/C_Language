#include <stdio.h>

typedef struct
{
    int x;
    int y;
}A_t;


int area(A_t a)
{
    int l, b;
    l = a.x;
    b = a.y;
    return l * b;
}
int main()
{
    A_t a;
    printf("Enter the value of l: ");
    scanf("%d", &a.x);
    printf("Enter the value of b: ");
    scanf("%d", &a.y);

    printf("Area of Rectangle = %d\n", area(a));
}