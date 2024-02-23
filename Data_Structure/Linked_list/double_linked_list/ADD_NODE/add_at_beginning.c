#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
// Create a function for adding first node of list
struct node *add_begin(struct node *head, int new_num)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory is not assigned\n");
    }
    temp->next = NULL;
    temp->data = new_num;
    temp->prev = NULL;

    temp->next = head;
    head->prev = temp;
    head = temp;
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
    int num, new_num;
    int a[100];
    printf("Enter the number of nodes :");
    scanf("%d", &num);
    printf("Enter the value of node :\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a new number that you want to add:");
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
    head = add_begin(head, new_num);
    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next;
    }
}