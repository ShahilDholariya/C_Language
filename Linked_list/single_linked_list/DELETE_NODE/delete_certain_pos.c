#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void certain_pos(struct node **head, int position)
{
    struct node *current = *head;
    struct node *previous = *head;
    if (*head == NULL)
    {
        printf("Link is an empty\n");
    }
    else if (position == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
        while (position != 1)
        {
            previous = current;
            current = current->link;
            position--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
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

    second = (struct node *)malloc(sizeof(struct node));
    second->data = 98;
    second->link = NULL;
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    head->link->link->link = second;

    certain_pos(&head, 3);
    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}