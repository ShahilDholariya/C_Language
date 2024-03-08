#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int queue_arr[MAX];
int front = -1, rear = -1;

int isEmpty()
{
    if (front == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (rear == MAX - 1)
        return 1;
    else
        return 0;
}

void enqueue(int data)
{
    if (isFull())
    {
        printf("Queue overflow\n");
        exit(1);
    }
    if (isEmpty())
    {
        front = 0;
    }
    rear++;
    queue_arr[rear] = data;
}

int dequeue()
{
    int value;
    if (isEmpty())
    {
        printf("Queue underflow\n");
        exit(1);
    }
    value = queue_arr[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
    return value;
}

void print()
{
    if (isEmpty())
    {
        printf("Empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d", queue_arr[i]);
        }
        printf("\n");
    }
}

void dec_to_bin(int n)
{
    while (n != 0)
    {
        enqueue(n % 2);
        n = n / 2;
    }
}

int main()
{
    int num;
    printf("Enter any Decimal number: ");
    scanf("%d", &num);
    dec_to_bin(num);

    printf("Binary representation: ");
    print();

    return 0;
}
