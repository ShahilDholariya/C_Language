#include <stdio.h>
int main()
{
     int size,i;
     printf("Enter the size of my array:\n");
     scanf("%d",&size);
     int a[size];
     printf("Enter the element of array:\n");
     for(i=0;i<size;i++){
        scanf("%d",&a[i]);
     }
     printf("My array is:\n");
     for(i=0;i<size;i++){
        printf("%d\n",a[i]);
     }
    // int a[5] = {23, 45, 10, 30, 34};
    int  max,min;
    max = a[0];
    min = a[0];
    for (i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
             min =a[i];
        }
    }
    printf("Max number of my array is: %d\n", max);
    printf("Min number of my array is: %d\n", min);
    return 0;
}