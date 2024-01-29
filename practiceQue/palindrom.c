#include <stdio.h>
int main()
{
    int num, r, store;
    int sum = 0;

    printf("Enter any number:");
    scanf("%d", &num);
    store = num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum * 10 + r;
        num = num / 10;
    }

    if (sum == store)
    {
        printf("Given number is Palindrom");
    }
    else
    {
        printf("Given number is not Palidrom");
    }
    printf("\n");
    return 0;
}