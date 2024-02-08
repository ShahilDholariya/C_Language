#include <stdio.h>

union abc
{
    int a;
    float b;
    char c;
    double d;
};
int main()
{
    union abc s;
    printf("size of union = %ld\n", sizeof(s));
    return 0;
}