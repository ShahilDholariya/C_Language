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
        printf("Prime Factor is :");
        for (int i = front; i <= rear; i++)
        {
            printf("%d", queue_arr[i]);
        }
        printf("\n");
    }
}

void prime_fact(int num) // create a function for find prime factor of given number
{
    int i = 2;
    while (num != 1)
    {
        while (num % i == 0)
        {
            enqueue(i);
            num = num / i;
        }
        i++;
    }
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    prime_fact(n);
    print();
    return 0;
}
