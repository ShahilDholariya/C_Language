#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *dlt_last(struct node *head)
{
    if (head == NULL)
    {
        printf("List is an empty\n");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *ptr;
        ptr = head;
        while (ptr->link->link != NULL)
        {
            ptr = ptr->link;
        }
        free(ptr->link);
        ptr->link = NULL;
    }
    return head;
}
int main()
{
   struct node *head,*ptr;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 15;
    head->link = NULL;
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }

    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = 37;
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

    head=dlt_last(head);
    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}