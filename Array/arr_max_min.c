#include <stdio.h>
int main()
{
    int a[5] = {23, 45, 10, 30, 34};
    int i, max,min;
    max = a[0];
    min = a[0];
    for (i = 0; i < 5; i++)
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
    printf("Max number is: %d\n", max);
    printf("Min number is: %d\n", min);
    return 0;
}