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
int main()
{
    int choice;
    printf("Enter the choice: Enter \n0 for add \n1 for sub \n2 for mul \n3 for div\n ");
    scanf("%d", &choice);

    oper p[] = {add, sub, mul, div};
    int result = (p[choice])(20, 10);
    printf("Result = %d\n", result);
    return 0;
}
