#include <stdio.h>

typedef int (*area)(int, int, int);

int Box1(int a, int b, int c)
{
    return a * b * c;
}
int Box2(int a, int b, int c)
{
    return a + b + c;
}
int Box3(int a, int b, int c)
{
    return a * b - c;
}

int main()
{
    area size[3] = {Box1, Box2, Box3};

    int l, b, h;
    printf("Enter the value of l:");
    scanf("%d", &l);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of h:");
    scanf("%d", &h);

    printf("Size of box = %d\n", size[0](l, b, h));
    printf("Size of box = %d\n", size[1](l, b, h));
    printf("Size of box = %d\n", size[2](l, b, h));

    return 0;
}