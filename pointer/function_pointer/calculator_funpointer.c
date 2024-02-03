#include <stdio.h>

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
    int (*ptr[])(int, int) = {sum, sub, mul, div}; // use function-pointer
    int choice;
    printf("Enter 0 for sum,Enter 1 for sub,Enter 2 for mul,Enter 3 for div\n");
    printf("Enter a choice:");
    scanf("%d", &choice);
    int a, b, result;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Result = %d\n", (ptr[choice])(a, b));
    return 0;
}
// switch (choice)
// {
// case 0:
//     result = sum(a, b);
//     break;
// case 1:
//     result = sub(a, b);
//     break
// case 2:
//     result = mul(a, b);
//     break;
// case 3:
//     result = div(a, b);
//     break;
// default:
//     printf("Invalid Choice\n");
//      break;
// }
// printf("Result = %d\n",result);
