#include <stdio.h>
int main()
{

    int index;
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int a[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Your Array is:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter any index which is less than your array length : ");
    scanf("%d", &index);

    for (int i = index; i < size; i++)
    {
        a[i] = a[i + 1];
    }
    size--;
    printf("My array is:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}