#include <stdio.h>
typedef int (*ptr)(int, int, int);
int areaofbox(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    int area, l, b, h;
    ptr p = areaofbox;
    printf("Enter the value of l & b & h:\n");
    scanf("%d %d %d", &l, &b, &h);
    area = (p)(l, b, h);
    printf("Area = %d\n", area);
    return 0;
}