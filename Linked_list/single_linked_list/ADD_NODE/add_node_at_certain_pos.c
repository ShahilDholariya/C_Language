#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void certain_pos(struct node **head, int position)
{
    struct node *ptr, *temp;
    ptr = *head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 100;
    temp->link = NULL;
    if (temp == NULL)
    {
        printf("Memory is not assigned\n");
    }
    if (position == 1)
    {
        temp->link = *head;
        *head = temp;
    }
    else
    {
        while ((position - 1) != 1)
        {
            ptr = ptr->link;
            position--;
        }
        temp->link = ptr->link;
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