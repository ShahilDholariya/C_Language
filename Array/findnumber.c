#include <stdio.h>
int main()
{

    int size, i,n;
    printf("enter the size of an array: ");
    scanf("%d", &size);

    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Please Enter elements of an array:");
        scanf("%d", &arr[i]);
    }
    printf("current array is: ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\nenter any element:");
    scanf("%d",&n);
    if (n=arr[i])
    {
        printf("Your Element is match\n");
    }
    else{
        printf("Your Element is not match\n");
    }
    return 0;
}
    
    

    
