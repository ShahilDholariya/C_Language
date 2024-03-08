#include <stdio.h>
#include <stdlib.h>
#define MAX 20

typedef struct
{
    int front;
    int rear;
    int size;
    int data[MAX];
} Queue_t;

void enqueue(Queue_t *q, int value)
{
    if (q->size == MAX)
    {
        printf("Queue overflow\n");
        exit(1);
    }
    else
    {
        q->rear = (q->rear + 1);
        if (q->rear == MAX)
        {
            q->rear = 0;
        }
        q->data[q->rear] = value;
        q->size++;
    }
}

int dequeue(Queue_t *q)
{
    int value;
    if (q->size == 0)
    {
        printf("Queue underflow\n");
        exit(1);
    }
    else
    {
        value = q->data[q->front];
        q->front = (q->front + 1);
        if (q->front == MAX)
        {
            q->front = 0;
        }
        q->size--;
        return value;
    }
}

void print(Queue_t q)
{
    if (q.size == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i = q.front;
        for (int count = 0; count < q.size; count++)
        {
            printf("%d ", q.data[i]);
            i = (i + 1) % MAX;
        }
    }
}

void dec_to_bin(Queue_t *q, int n)
{
    while (n != 0)
    {
        enqueue(q, n % 2);
        n = n / 2;
    }
}

int main()
{
    Queue_t q;
    q.front = q.rear = q.size = 0;

    int num;
    printf("Enter any Decimal number: ");
    scanf("%d", &num);

    dec_to_bin(&q, num);

    printf("Binary representation: ");
    print(q);
    printf("\n");

    return 0;
}
