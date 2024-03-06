#include <stdio.h>

// Define a structure with a function pointer
struct Calculator
{
    int (*operation)(int, int);
};
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}
int main()
{
    // Create instances of the Calculator structure
    struct Calculator addCalc = {&add};
    struct Calculator subtractCalc = {&subtract};
    struct Calculator multiplyCalc = {&multiply};

    // Use the function pointers in the structure
    int result1 = addCalc.operation(5, 3);
    int result2 = subtractCalc.operation(8, 2);
    int result3 = multiplyCalc.operation(4, 6);

    // Print the results
    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);

    return 0;
}
