#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void sorting(struct node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
    }
    struct node *current, *next;
    int temp;
    current = *head;
    while (current != NULL)
    {
        next = current->link;
        while (next != NULL)
        {
            if (current->data > next->data)
            {
                temp = current->data;
                current->data = next->data;
                next->data = temp;
            }
            next = next->link;
        }
        current = current->link;
    }
}
struct node *add_end(struct node *ptr, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory is not assigned\n");
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
    head->data = 4;
    head->link = NULL;

    ptr = head;
    ptr = add_end(ptr, 5);
    ptr = add_end(ptr, 2);
    ptr = add_end(ptr, 1);

    printf("Original List:\n");
    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }

    sorting(&head);

    printf("Sorted List:\n");
    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}