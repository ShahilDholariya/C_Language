#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void count_node(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("Linked list is Empty\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("Number of node = %d\n", count);
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 15;
    head->link = NULL;
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }

    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = 34;
    second->link = NULL;
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    head->link = second;

    second = (struct node *)malloc(sizeof(struct node));
    second->data = 78;
    second->link = NULL;
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    head->link->link = second;

    second = (struct node *)malloc(sizeof(struct node));
    second->data = 99;
    second->link = NULL;
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    head->link->link->link = second;

    count_node(head);

    return 0;
}