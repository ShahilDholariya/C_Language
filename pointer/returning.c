#include <stdio.h>
int *midvalue(int a[5],int n);
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int *mid = midvalue(a, n);
    printf("%d\n", *mid);
}

int *midvalue(int a[5], int n)
{
    return &a[n / 2];
}