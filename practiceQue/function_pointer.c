
#include <stdio.h>
typedef int (*fp)(int, int);
typedef struct
{
    fp oper;
    // int (*fp)(int, int);
} A_t;
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int main()
{
    int result1,result2;
    A_t cal[] = {{.oper = add}, {.oper = sub}};
    // A_t cal[] = {add, sub};
    result1 = cal[0].oper(5, 3);
    result2 = cal[1].oper(5, 3);
    printf("%d\n", result1);
    printf("%d\n", result2);
    return 0;
}