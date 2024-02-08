#include <stdio.h>
typedef struct
{
    int (*ptr1)(int, int);
    int (*ptr2)(int, int);
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
    int x, y, result1, result2;
    printf("Enter the value of x and y :\n");
    scanf("%d\n %d", &x, &y);
    Add_t add;
    add.ptr1 = sum;
    add.ptr2 = sub;
    // result1 = add.ptr1(x, y);
    // result2 = add.ptr2(x, y);
    // printf("sum = %d\n", result1);
    // printf("sub = %d\n", result2);

    printf("Sum = %d\n", add.ptr1(x, y));
    printf("Sub = %d\n", add.ptr2(x, y));

    // printf("Sum = %d\n", add.ptr1(10, 20));
    // printf("Sub = %d\n", add.ptr2(30, 20));
    return 0;
}