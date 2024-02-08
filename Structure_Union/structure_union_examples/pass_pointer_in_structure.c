#include <stdio.h>
typedef struct
{
    int x;
} Age_t;
void voting(A_t *p)
{
    // printf("%d\n", p->x);
    if (p->x > 17)
    {
        printf("Eligible for vote\n");
    }
    else
    {
        printf("Not eligible for vote\n");
    }
}
int main()
{
    Age_t age;
    printf("Enter the Age :");
    scanf("%d", &age.x);
    // printf("%d\n", age.x);
    voting(&age);
    // printf("%d\n", age.x);
    return 0;
}