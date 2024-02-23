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
void prime_fact(int num) // create a function for find prime factor of given number
{
    int i = 2;
    while (num != 1)
    {
        while (num % i == 0)
        {
            push(i);
            num = num / i;
        }
        i++;
    }
    printf("Prime factorial is: ");
    while (!isEmpty())
    {
        printf("%d ", pop());
    }
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    prime_fact(n);
    printf("\n");
    return 0;
}