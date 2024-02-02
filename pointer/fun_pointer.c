#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*ptr)(int, int); // Declare a function pointer

    ptr = add; // initialization of function-pointer

    int result = (*ptr)(10, 20); // call add function using function-pointer

    printf("sum is = %d\n", result);

    return 0;
}
