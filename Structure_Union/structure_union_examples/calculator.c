#include <stdio.h>
typedef struct
{
    int x;
    int y;
} Cal_t;

int mathamatical_op(int choice, Cal_t *p)
{
    int result;
    switch (choice)
    {
    case 1:
        result = p->x + p->y;
        printf("value of x = %d, and y = %d\r\n", p->x, p->y);
        return result;
        break;
    case 2:
        result = p->x - p->y;
        printf("value of x = %d, and y = %d\r\n", p->x, p->y);
        return result;
        break;
    case 3:
        printf("value of x = %d, and y = %d\r\n", p->x, p->y);
        p->x = 60;
        p->y = 40;
        break;
    default:
        printf("You Entered Invalid Choice\n");
        return 0;
    }
}

int main()
{
    Cal_t abc;
    int choice;
    int result;
    printf("Enter the value of x : ");
    scanf("%d", &abc.x);
    printf("Enter the valueof y : ");
    scanf("%d", &abc.y);
    printf("Enter a choice : 1 for sum & 2 for sub & 3 for update\n");
    scanf("%d", &choice);

    result = mathamatical_op(choice, &abc);
    if (choice == 1 || choice == 2)
        printf("Result = %d\n", result);
    else if(choice==3)
         printf("Upated value of x = %d and y = %d\n", abc.x, abc.y);
    else
        return 0;
}
