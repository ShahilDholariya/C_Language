#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *add_empty(struct node *head,int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory is not allocated\n");
    }
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}
int main()
{
    struct node *head;
    head = add_empty(head,100);
    printf("Data = %d\n", head->data);
    return 0;
}