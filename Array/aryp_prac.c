#include <stdio.h>
int main()
{
    int ar, ac;
    int a[5][5];
    printf("Enter the number of row and column of matrix A:");
    scanf("%d %d", &ar, &ac);

    int br, bc;
    int b[5][5];
    printf("Enter the number of row and column of matrix B:");
    scanf("%d %d", &br, &bc);

    printf("Please Enter elements of matrix A:");
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < ac; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Please Enter elements of matrix B:");
    for (int i = 0; i < br; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix A is:");
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < ac; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    printf("\nMatrix B is:");
    for (int i = 0; i < br; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            printf("%d ", b[i][j]);
        }
    }
}