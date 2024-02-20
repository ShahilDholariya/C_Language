#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *dlt_first(struct node *head) // Create a function for deleting first node
{
    if (head == NULL)
    {
        printf("List is Emplty\n");
    }
    struct node *ptr = head;
    head = head->link;
    free(ptr);
    ptr = NULL;
    return head;
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

    head = dlt_first(head);

    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}