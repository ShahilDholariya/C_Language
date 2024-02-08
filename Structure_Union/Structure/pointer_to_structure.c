#include <stdio.h>
struct abc
{
    int x;
    int y;
};
int main()
{
    struct abc a = {0, 1};
    struct abc *ptr = &a;

    printf("x = %d\n", ptr->x);
    printf("y = %d\n", ptr->y);
    return 0;
}
