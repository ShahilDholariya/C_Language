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
    s s1;
    printf("sizeof(a)=%ld\n", sizeof(s1.a));
    printf("sizeof(e)=%ld\n", sizeof(s1.e));
    printf("sizeof(f)=%ld\n", sizeof(s1.f));
    printf("Total sizeof(s)=%ld\n", sizeof(s));
    return 0;
}
