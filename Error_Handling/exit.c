#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dividend = 20;
    int divisor = 0;
    int result;

    if (divisor == 0)
    {
        exit(EXIT_FAILURE);
    }

    result = dividend / divisor;
    fprintf(stderr, "Value is : %d\n", result);
        exit(EXIT_SUCCESS);
}