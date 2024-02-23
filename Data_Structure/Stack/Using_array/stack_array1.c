#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;
int isFull() // create a function for checking stack is full or not
{
    if (first == MAX - 1)
    {
        return 1;
    }
    else
        return 0;
}
int isEmpty() // create a function for checking stack is empty or not
{
    if (first == -1)
    {
        return 1;
    }
    else
        return 0;
}
void push(int data) // create a function for adding the data into stack
{
    if (isFull())
    {
        printf("Stack overflow\n");
        return;
    }
    first += 1;
    for (int i = first; i > 0; i--)
    {
        stack_arr[i] = stack_arr[i - 1];
    }
    stack_arr[0] = data;
}
int pop() // create a function for pop-up the data into stack
{
    int value;
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack_arr[0];
    for (int i = 0; i < first; i++)
    {
        stack_arr[i] = stack_arr[i + 1];
    }
    first -= 1;
    return value;
}
int peek() // create a function for getting top element of the stack
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack_arr[0];
}
int print() // create a function for printing stack element
{
    int i;
    if (first == -1)
    {
        printf("Stack underflow");
    }
    for (i = 0; i <= first; i++)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}
int main()
{
    int choice, data;
    while (1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the Top element\n");
        printf("4. Print all element of stack\n");
        printf("5. Quit\n");
        printf("Enter a Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element that you want to push : ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("Deleted element is : %d\n", data);
            break;
        case 3:
            printf("Top element of Stack is : %d\n", peek());
            break;
        case 4:
            printf("Your Stack is:\n");
            print();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("You Entered Wrong Choice\n");
        }
    }
    return 0;
}
