#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
// Create a function for deleting last node of list
struct node *dlt_end(struct node *head)
{
    struct node *ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
    return head;
}
// Create a function for adding node at end of list
struct node *add_end(struct node *ptr, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}
int main()
{
    int num;
    int a[100];
    printf("Enter the number of nodes:");
    scanf("%d", &num);
    printf("Enter the value of nodes:\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    struct node *head, *ptr;

    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("List is an Empty\n");
    }
    else
    {
        head->prev = NULL;
        head->data = a[0];
        head->next = NULL;
    }
    ptr = head;
    for (int i = 1; i < num; i++)
    {
        ptr = add_end(ptr, a[i]);
    }

    head = dlt_end(head);

    ptr = head;
    printf("Your new list is:\n");
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}