#include <stdio.h>
#define PI 3.14

int main()
{
#ifdef PI
    printf("PI is Defined\n");
#elif SQURE
    printf("Squre id Defined\n");
#else
    printf("Both are not Defined\n")
#endif

#ifndef SQURE
    printf("Squre is not Defined\n");
#else
    printf("Error\n");
#endif
}