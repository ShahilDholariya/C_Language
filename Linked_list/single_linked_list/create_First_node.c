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
    if (head == NULL)
    {
        printf("Memory is not assigned\n");
    }
    head->data = 15;
    head->link = NULL;
    printf("Data = %d\n", head->data);

    return 0;
}