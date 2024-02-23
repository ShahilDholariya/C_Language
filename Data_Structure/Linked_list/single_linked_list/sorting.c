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
struct node *add_end(struct node *ptr, int data) // Create a function of adding node at end of list
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
    int num;
    int a[100];
    printf("Enter the number of nodes :");
    scanf("%d", &num);
    printf("Enter the value of node :\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }

    struct node *head, *ptr;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    else
    {
        head->data = a[0];
        head->link = NULL;
    }
    ptr = head;
    for (int i = 1; i < num; i++)
    {
        ptr = add_end(ptr, a[i]);
    }

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