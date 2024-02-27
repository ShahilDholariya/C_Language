#include <stdio.h>
// Create a function for searching an element in BTS
int Binary_search_tree(int a[], int data, int n)
{
    int l, r, mid;
    l = 0;
    r = n - 1;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (data == a[mid])
        {
            // printf("mid=%d\n", a[mid]);
            return mid;
        }
        else if (data < a[mid])
        {
            r = mid - 1;
            // printf("r=%d\n", r);
        }
        else
        {
            l = mid + 1;
            // printf("l=%d\n", l);
        }
    }
    return -1;
}
int main()
{
    int size, i, num;
    printf("Please Enter the size of an array :");
    scanf("%d", &size);

    int a[size];
    printf("Enter the element of an array:\r\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element that you want to find :");
    scanf("%d", &num);

    int result = Binary_search_tree(a, num, size);

    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found in the array\n");
    }
    return 0;
}
