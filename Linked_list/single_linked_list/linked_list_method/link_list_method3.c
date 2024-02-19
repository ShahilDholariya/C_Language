#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void add_node(struct node *ptr, int data)
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
}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    head->data = 10;
    head->link = NULL;

    struct node *ptr = head;
    add_node(ptr, 20);
    ptr = ptr->link;
    add_node(ptr, 30);
    ptr = ptr->link;
    add_node(ptr, 40);

    ptr = head;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}