#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    head->prev = NULL;
    head->data = 10;
    head->next = NULL;
    printf("Data = %d\n", head->data);
    return 0;
}