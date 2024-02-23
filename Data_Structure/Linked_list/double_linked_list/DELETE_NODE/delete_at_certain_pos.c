#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *dlt_certain(struct node *head, int position)
{
    struct node *prev, *current;
    if (head == NULL)
    {
        printf("List is an Empty");
        return 0;
    }
    current = head;
    if (position == 1)
    {
        head = head->next;
        free(current);
        head->prev = NULL;
    }
    else
    {
        while (position != 1)
        {
            prev = current;
            current = current->next;
            position--;
        }
        prev->next = current->next;
        prev->next->prev = prev;
        free(current);
        current = NULL
    }
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
        head->prev = NULL;
        head->data = a[0];
        head->next = NULL;
    }
    ptr = head;
    for (int i = 1; i < num; i++)
    {
        ptr = add_end(ptr, a[i]);
    }

    head = dlt_certain(head, pos);
    ptr = head;
    printf("Your new list is:\n");
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}