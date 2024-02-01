#include <stdio.h>
int main()
{
    int size, i, j;
    printf("Enter the size of the arrays:\n");
    scanf("%d", &size);

    int a[size];
    int b[size];
    j=size-1;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The current array is:\n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n",i, a[i]);
    
    }
    for (i=0;i<size;i++){
       b[j]=a[i];
       j--;
    }
    printf("\nMy Reverse array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = % d\r\n", i, b[i]);
    }
}