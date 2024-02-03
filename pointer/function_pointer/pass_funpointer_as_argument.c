#include <stdio.h>
typedef int (*oper)(int, int);
int add(int a, int b)
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
int operation(oper p, int a, int b)
{
    return (*p)(a, b);
}
int main()
{
    int choice;
    printf("Enter the choice: either 0 or 1 or 2 or 3\n ");
    scanf("%d", &choice);

    oper oper[] = {add, sub, mul, div};
    int result = operation(oper[choice], 20, 10);
    printf("Result = %d\n", result);
    return 0;
}