#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void shifting(struct node **head)
{
    if (*head == NULL)
    {
        printf("List is an empty\n");
    }
    struct node *current, *prev;
    current = *head;
    prev = NULL;
    while (current->link != NULL)
    {
        prev = current;
        current = current->link;
    }
    current->link = *head;
    prev->link = NULL;
    *head = current;
}
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
    head->data = 20;
    head->link = NULL;

    ptr = head;
    ptr = add_end(ptr, 30);
    ptr = add_end(ptr, 40);
    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }
    shifting(&head);
    printf("After Shifting:\n");
    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}