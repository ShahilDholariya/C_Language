#include <stdio.h>
int main()
{
    int size;
    int i;

    printf("Enter the number of element in array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the element:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Final array is :");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nReverse array is:");
    for(i=size-1;i>=0;i--){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}