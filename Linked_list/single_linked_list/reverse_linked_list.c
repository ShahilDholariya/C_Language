#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void reverse(struct node **head)
{
    struct node *prev, *current, *next;
    prev = NULL;
    current = next = *head;
    while (next != NULL)
    {
        next = next->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}
struct node *add_end(struct node *ptr, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    if (temp == NULL)
    {
        printf("Memory is not assigned\n");
    }
    ptr->link = temp;
    return temp;
}
int main()
{
    struct node *head, *ptr;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    ptr = head;
    ptr = add_end(ptr, 20);
    ptr = add_end(ptr, 30);
    ptr = add_end(ptr, 40);
    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }

    reverse(&head);
    printf("Reversed List is:\n");
    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}