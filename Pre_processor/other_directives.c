#include <stdio.h>

#define MIN_VALUE 10

int main()
{

    printf("Min value is: %d\n", MIN_VALUE);

#undef MIN_VALUE // undefining max value

#define MIN_VALUE 20 // again redefining MIN_VALUE

    printf("Min value after undef and again redefining it: %d\n", MIN_VALUE);

    return 0;
}
