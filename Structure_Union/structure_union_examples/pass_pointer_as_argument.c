#include <stdio.h>
typedef struct
{
    int x;
    int y;
} A_t;

void cal(A_t *ptr)
{
    printf("x=%d\n", ptr->x);
    printf("y=%d\n", ptr->y);
}
int main()
{
    A_t abc;

    printf("Enter the value of x:");
    scanf("%d", &abc.x);

    printf("Enter the value of y: ");
    scanf("%d", &abc.y);

    cal(&abc);
    // printf("x=%d\ny=%d\n", abc.x, abc.y);
}