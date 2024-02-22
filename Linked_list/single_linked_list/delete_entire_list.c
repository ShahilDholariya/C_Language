#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void dlt_entire_list(struct node *head) // create a function for deleting entire list
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is an empty\n");
    }
    while (ptr != NULL)
    {
        ptr = ptr->link;
        free(head);
        head = ptr;
    }
    printf("Delete Entire list\n");
}
// Create a function for adding node at end of list
struct node *add_end(struct node *ptr, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Link is an empty\n");
    }
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}
int main()
{
    struct node *head, *ptr;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    head->data = 50;
    head->link = NULL;

    ptr = head;
    ptr = add_end(ptr, 30);
    ptr = add_end(ptr, 70);
    dlt_entire_list(head);
    return 0;
}