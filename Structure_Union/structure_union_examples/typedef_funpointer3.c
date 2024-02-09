#include <stdio.h>
typedef int (*area)(int, int,int);

typedef struct
{
    area box_size;
} A_t;

int Box(int a, int b, int c)
{
    return a * b * c;
}

int main()
{
    A_t total;
    total.box_size = Box;

    int l, b, h;
    printf("Enter the value of l:");
    scanf("%d", &l);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of h:");
    scanf("%d", &h);

    printf("Total area of box = %d\n", total.box_size(l, b, h));

    return 0;
}