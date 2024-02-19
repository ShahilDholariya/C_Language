#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int *ptr = (void *)malloc(2 * sizeof(int)); // Allocating Dynamic Memory to pointer
    if (ptr == NULL)
    {
        printf("Memory is not allocated");
        exit(1);
    }
    for (i = 0; i < 2; i++)
    {
        printf("Enter an 2 integer : ");
        scanf("%d", &ptr[i]);
    }
    ptr = (void *)realloc(ptr, 4 * sizeof(int)); // Memory allocation for two more integer

    printf("Enter two more integer:\n");
    for (i = 2; i < 4; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Your integers is :");
    for (i = 0; i < 4; i++)
    {
        printf(" %d ", ptr[i]);
    }
    printf("\n");
}
