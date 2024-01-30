#include<stdio.h>

int main()
{
    int size , i;
        printf("Enter the size of the arrays:\n");
        scanf("%d",&size);

    int arr1[size];
        printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d",&arr1[i]);
    }
        printf("The current array is:\n");
    for ( i =0; i< size; i++)
    {
        printf("%d", arr1[i]);
    }
    return 0;
}