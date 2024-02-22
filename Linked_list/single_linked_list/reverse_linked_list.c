#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void reverse(struct node **head)
{
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
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
// Create a function for adding node at end of list
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
    ptr = head;
    printf("Your List is:\n");
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