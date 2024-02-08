#include <stdio.h>
typedef struct
{
    int (*ptr)(int);
} square_t;
int mul(int a)
{
    return a * a;
}
int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    // printf("%d",a);
    square_t sq;
    sq.ptr = &mul;
    int result;
    result = sq.ptr(a);
    printf("Square of %d = %d\n", a, result);
    return 0;
}
