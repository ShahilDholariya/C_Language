#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
// Create a function for adding a node at certain position
void certain_pos(struct node **head, int position)
{
    int new_num;
    printf("Enter a new number that you want to add :");
    scanf("%d", &new_num);
    struct node *ptr, *temp;
    ptr = *head;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory is not assigned\n");
    }
    temp->data = new_num;
    temp->link = NULL;

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
    if (num <= 0)
    {
        printf("Please Enter Valid number of node\n");
    }
    printf("Enter the value of node :\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position that you want to add a new number:");
    scanf("%d", &pos);
    if (pos > (num + 1))
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
    printf("new list is :\n");
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}