#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link; // Self Referntial Structure
};
int main()
{
    struct node *head;                                 // Create a pointer of struct node type
    head = (struct node *)malloc(sizeof(struct node)); // Dynamic Memory Allocation
    head->data = 15;
    head->link = NULL;
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    printf("Head Link = %ld\n", head->link); // 1st node

    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = 34;
    second->link = NULL;
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    head->link = second;
    printf("Head Link after update = %ld\n", head->link); // 1st node

    second = malloc(sizeof(struct node));
    second->data = 78;
    second->link = NULL;
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    head->link->link = second;
    printf("Second Link = %ld\n", head->link->link);      // 2nd node
    printf("Third Link = %ld\n", head->link->link->link); // 3rd node
    return 0;
}