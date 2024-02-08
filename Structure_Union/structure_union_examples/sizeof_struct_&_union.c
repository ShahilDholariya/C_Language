#include <stdio.h>
#pragma pack(1)
typedef struct
{
    double a; // size 8
    union
    {
        char b[4];
        double c;
        int d;
    } e; // size 8
    char f[4];
} s; // size 4
int main()
{
    // s s1;
    // printf("%ld\n", sizeof(s1.e));
    // printf("%ld\n", sizeof(s1.a));
    // printf("%ld\n", sizeof(s1.f));
    printf("%ld\n", sizeof(s));
    return 0;
}