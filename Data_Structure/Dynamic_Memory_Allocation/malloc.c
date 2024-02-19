#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("Enter the number of integer:\n");
    scanf("%d", &n);

    int *ptr = (void *)malloc(n * sizeof(int)); // Allocating Dynamic Memory to pointer

    if (ptr == NULL)
    {
        printf("Memory is not allocated");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter an integer : ");
        scanf("%d", &ptr[i]);
    }
    printf("Your integers is :");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", ptr[i]);
    }

    // free(ptr);
    // ptr=NULL;

    printf("\n");
    return 0;
}