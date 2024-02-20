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
    if (temp == NULL)
    {
        printf("Memory is not assigned\n");
    }
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 10;
    temp->link = NULL;

    temp->link = *head;
    *head = temp;
}

int main()
{
    struct node *head, *ptr;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    head->data = 15;
    head->link = NULL;

    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));
    if (second == NULL)
    {
        printf("Memory is not assigned\n");
    }
    second->data = 34;
    second->link = NULL;
    head->link = second;

    second = (struct node *)malloc(sizeof(struct node));
    second->data = 78;
    second->link = NULL;
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
