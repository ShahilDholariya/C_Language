#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
};
void rearrange(struct node *list)
{
    struct node *p, *q;
    int temp;
    if (list == NULL)
    {
        printf("Memory is not assigned\n");
    }
    p = list;
    q = list->next;
    while (q)
    {
        temp = p->value;
        p->value = q->value;
        q->value = temp;
        p = q->next;
        q = p ? p->next : NULL;
    }
}
struct node *add_end(struct node *ptr, int value) // Create a function for adding a node at end
{
    struct node *temp;
    if (temp == NULL)
    {
        printf("Link is an empty\n");
    }
    temp = (struct node *)malloc(sizeof(struct node));

    temp->value = value;
    temp->next = NULL;

    ptr->next = temp;
    return temp;
}
int main()
{
    struct node *list, *ptr;
    list = (struct node *)malloc(sizeof(struct node));
    if (list == NULL)
    {
        printf("Memory is not assigned\n");
    }
    list->value = 1;
    list->next = NULL;

    ptr = list;
    ptr = add_end(ptr, 2);
    ptr = add_end(ptr, 3);
    ptr = add_end(ptr, 4);
    ptr = add_end(ptr, 5);
    ptr = add_end(ptr, 6);
    ptr = add_end(ptr, 7);
    printf("original list is:\n");
    ptr = list;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->value);
        ptr = ptr->next;
    }

    printf("Rearrange list is:\n");
    rearrange(list);

    ptr = list;
    while (ptr != NULL)
    {
        printf("Data = %d\n", ptr->value);
        ptr = ptr->next;
    }
    return 0;
}