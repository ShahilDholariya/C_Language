#include <stdio.h>
typedef struct
{
    int (*addition)(int, int);
    int (*subtraction)(int, int);
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
    Add_t operation = {sum, sub};

    int x, y;
    printf("Enter the value of x and y :\n");
    scanf("%d\n %d", &x, &y);

    printf("Sum = %d\n", operation.addition(x, y));
    printf("Sub = %d\n", operation.subtraction(x, y));

    return 0;
}
