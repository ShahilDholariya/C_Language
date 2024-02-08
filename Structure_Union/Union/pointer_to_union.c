#include <stdio.h>
union abc
{
    int x;
    char y;
};
int main()
{
    union abc a={2};
    // a.x=2;
    a.y='c';
    union abc *ptr = &a;

    printf("x = %d\n", ptr->x);
    printf("y = %c\n", ptr->y);
    return 0;
}