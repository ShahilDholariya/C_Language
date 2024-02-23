#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
// Create a function for adding node at certain position of list
struct node *certain_pos(struct node *head, int position, int new_num)
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory is not allocated\n");
    }
    temp->prev = NULL;
    temp->data = new_num;
    temp->next = NULL;
    ptr = head;
    if (position == 1)
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
        return head;
    }
    else
    {
        while ((position - 1) != 1)
        {
            ptr = ptr->next;
            position--;
        }
        temp->next = ptr->next;
        ptr->next = temp;
        temp->prev = ptr;
    }
    return head;
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
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    ptr->next = temp;
    return temp;
}
int main()
{
    int num, pos,new_num;
    int a[100];
    printf("Enter the number of nodes :");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Please Enter valid number of node\n");
        return 0;
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
        printf("You entered invalid position.\nPlease Try Agian\n");
        return 0;
    }
    printf("Enter a new number that you want to add :");
    scanf("%d", &new_num);
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

    head = certain_pos(head, pos, new_num);
    ptr = head;
    printf("Your new list is:\n");
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}