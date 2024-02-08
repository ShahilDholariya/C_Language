#include <stdio.h>
struct abc
{
    char a;
    int c;
    char b;
    float d;
};
int main()
{
    struct abc var;
    printf("size of structure = %ld\n", sizeof(var));
    return 0;
}