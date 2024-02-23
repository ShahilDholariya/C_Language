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
        exit(1);
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
int main()
{
    Stack_t s;
    s.top = -1;
    int choice, data;
    while (1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print all element of stack\n");
        printf("4. Quit\n");
        printf("Enter a Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element that you want to push : ");
            scanf("%d", &data);
            push(&s, data);
            break;
        case 2:
            data = pop(&s);
            printf("Deleted element is : %d\n", data);
            break;

        case 3:
            printf("Your Stack is:");
            print(s);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("You Entered Wrong Choice\n");
        }
    }
    return 0;
}
