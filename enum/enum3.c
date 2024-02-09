#include <stdio.h>

enum point
{
    j,k,l,m,x,y,z,t,a,b,c,d
};

int main()
{
    enum point{ j, k, l, m };
    enum point1{x = 1,y = 34,t,z = 2};
    enum point2{a = 'A',b = 34,c = 'S',d};

    printf("j=%d ,k=%d ,l=%d ,m=%d\n", j, k, l, m);
    printf("x=%d ,y=%d ,z=%d ,t=%d\n", x, y, z, t);
    printf("a=%d ,b=%d .c=%d ,d=%d\n", a, b, c, d);

    return 0;
}