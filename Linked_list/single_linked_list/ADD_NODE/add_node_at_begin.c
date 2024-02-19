#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void add_begin(struct node **head)
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 10;
    temp->link = NULL;
    if (temp == NULL)
    {
        printf("Memory is not assigned\n");
    }
    else
    {
        temp->link = *head;
        *head = temp;
    }
}

int main()
{
    struct node *head, *ptr;
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

    add_begin(&head);
    ptr = head; // Assign the head to ptr for traversal
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
