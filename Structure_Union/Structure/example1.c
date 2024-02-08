#include <stdio.h>
struct ournode
{
    char x, y, z;
};
int main()
{
    struct ournode p = {'1', '0', 'a' + 2};
    struct ournode *q = &p;
    printf("%c %c\n", *((char *)q + 1), *((char *)q + 2));
    return 0;
}