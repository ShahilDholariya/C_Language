#include <stdio.h>
// Using fun-pointer in structure
typedef int (*calculator_t)(int, int);

typedef struct
{
    calculator_t addition;
    calculator_t subtraction;
} Add_t;

int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int main()
{
    // Add_t operation = {sum, sub};
    Add_t operation;
    operation.addition = &sum;
    operation.subtraction = &sub;

    int x, y;
    printf("Enter the value of x and y :\n");
    scanf("%d\n %d", &x, &y);

    printf("Sum = %d\n", operation.addition(x, y));
    printf("Sub = %d\n", operation.subtraction(x, y));

    return 0;
}