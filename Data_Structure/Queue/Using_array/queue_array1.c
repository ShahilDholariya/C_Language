#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int que_arr[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        que_arr[rear] = value;
    }
    else
    {
        rear++;
        que_arr[rear] = value;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue underflow\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("Deleted element is : %d\n", que_arr[front]);
        front++;
    }
}
void print()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is an empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", que_arr[i]);
        }
    }
}
int main()
{
    int choice, data;
    while (1)
    {
        printf("\n");
        printf("1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. Print all element of queue\n");
        printf("4. Quit\n");
        printf("Enter a Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element that you want to push : ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;

        case 3:
            printf("Your Queue is:");
            print();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("You Entered Wrong Choice\n");
        }
    }
    return 0;
}
