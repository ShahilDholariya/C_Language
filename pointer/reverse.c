#include <stdio.h>
int main()
{

    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int n = sizeof(a) / sizeof(a[0]);
    int *p = &a[0];
    int *q = &b[n - 1];

    for (p = &a[0]; p < &a[n]; p++)
    {
        *q = *p;
        q--;
    }
    printf("My Reverse array is: \n");
    for (q = &b[0]; q < &b[n]; q++)
    {
        printf("%d\n", *q);
    }
    return 0;
}

//         int a[5] = {1, 2, 3, 4, 5};
//         int n = sizeof(a) / sizeof(a[0]);
//         int *p = a;
//         printf("My array is: \n");
//         for (p = &a[0]; p < &a[n]; p++)
//         {

//             printf("%d\n", *p);
//         }
//         printf("Reverse array is :\n");
//         for (p = &a[n-1]; p >= &a[0]; p--)
//         {
//             printf("%d\n", *p);
//         }

//         return 0;
//
