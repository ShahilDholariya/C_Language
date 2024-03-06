#include <stdio.h>
typedef struct
{
    int (*fp)(int, int);
} cal_t;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    //  cal_t cal1={&add};
    //  cal_t cal2={&sub};
    //  cal_t cal3={&mul};
    cal_t c[] = {{&add}, {&sub}, {&mul}}; // initialize fun-pointer
    printf("Enter value of a & b\n");
    scanf("%d %d", &a, &b);
    int result1 = c[0].fp(a, b); // calling function using fun-pointer
    int result2 = c[1].fp(a, b);
    int result3 = c[2].fp(a, b);

    printf("sum=%d\n", result1);
    printf("sub=%d\n", result2);
    printf("mul=%d\n", result3);
    return 0;
}