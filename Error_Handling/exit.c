#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dividend = 20;
    int divisor = 0;
    int result;

    if (divisor == 0)
    {
        printf("Not Possible\n");
        exit(EXIT_FAILURE); // 1
    }

    result = dividend / divisor;
    printf("Value is : %d\n", result);
    exit(EXIT_SUCCESS); // 0
}