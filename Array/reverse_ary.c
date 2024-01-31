#include <stdio.h>
int main()
{
    int size;
    int i,temp,j;
    printf("Please Enter the size if an array :");
    scanf("%d", &size);

    int a[size];
    printf("Enter the element of an array:\r\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("My array is: \n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = % d\r\n", i, a[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }
    printf("Reverse array of my array is : \n");
    for (i = 0; i <size; i++)
    {
        printf("a[%d] = % d\r\n", i, a[i]);
    }
}