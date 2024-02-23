#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stack_arr[MAX];
int top = -1;

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}
int push(int data)
{
    if (isFull())
    {
        printf("Stack overflow\n");
        exit(1);
    }
    top++;
    stack_arr[top] = data;
}
int pop()
{
    int value;
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top--;
    return value;
}
void dec_to_bin(int n)
{
    while (n != 0)
    {
        push(n % 2);
        n = n / 2;
    }
    while (!isEmpty())
    {
        printf("%d ", pop());
    }
    printf("\n");
}
int main()
{
    int num;
    printf("Enter any Decimal number :");
    scanf("%d", &num);
    dec_to_bin(num);
    return 0;
}
