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

    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = 34;
    second->link = NULL;
    head->link = second;
    
    printf("Data = %d\n", head->data);
    printf("Data = %d\n", second->data);
    return 0;
}