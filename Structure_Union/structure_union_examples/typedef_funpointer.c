#include <stdio.h>

typedef int (*calculator_t)(int, int); // Define Fun-pointer

int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}

int main()
{
    calculator_t opration[4] = {sum, sub, mul, div};

    int x, y;
    printf("Enter the value of x and y :\n");
    scanf("%d\n %d", &x, &y);

    printf("Sum = %d\n", opration[0](x, y));
    printf("Sub = %d\n", opration[1](x, y));
    printf("Sub = %d\n", opration[2](x, y));
    printf("Sub = %d\n", opration[3](x, y));
    return 0;
}