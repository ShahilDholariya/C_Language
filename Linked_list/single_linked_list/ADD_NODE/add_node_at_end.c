#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
// Create a function for adding node at end of linked list
void add_end(struct node **head)
{
    struct node *ptr, *temp;
    ptr = *head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 65;
    temp->link = NULL;
    if (temp == NULL)
    {
        printf("Memory is not assigned\n");
    }
    else
    {
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
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

    add_end(&head);
    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}