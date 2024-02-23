#include <stdio.h>
#include <stdlib.h>
#define MAX 20

typedef struct
{
    int top;
    int data[MAX];
} Stack_t;
void push(Stack_t *s, int value)
{
    if (s->top == MAX - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        s->top++;
        s->data[s->top] = value;
    }
}
int pop(Stack_t *s)
{
    int value;
    if (s->top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        value = s->data[s->top];
        s->top--;
        return value;
    }
}
void print(Stack_t s)
{
    if (s.top == -1)
    {
        printf("Stack is an empty\n");
    }
    else
    {
        for (int i = s.top; i >= 0; i--)
        {
            printf("%d ", s.data[i]);
        }
    }
}
void dec_to_bin(Stack_t *s, int n)
{
    while (n != 0)
    {
        push(s, n % 2);
        n = n / 2;
    }
}
int main()
{
    Stack_t s;
    s.top = -1;
    int num;
    printf("Enter any Decimal number :");
    scanf("%d", &num);
    dec_to_bin(&s, num);
    print(s);
    printf("\n");
    return 0;
}