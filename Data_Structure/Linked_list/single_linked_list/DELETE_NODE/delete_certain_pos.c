#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
// Create a function for deleting a node at certain position
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
    int num, pos;
    int a[100];
    printf("Enter the number of nodes :");
    scanf("%d", &num);
    printf("Enter the value of node :\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position that you want to delete :");
    scanf("%d", &pos);
    if (pos > num)
    {
        printf("you entered invalid position.\nPlease Enter valid position.\n ");
        return 0;
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

    certain_pos(&head, pos);
    ptr = head;
    printf("Your new list is :\n");
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}