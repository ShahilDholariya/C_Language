#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *addEmpty(int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = ptr;
    return ptr;
}
struct node *add_begin(struct node *tail) // Function for adding node at begnning
{
    int new_nump;
    printf("Enter a new number that you want to add at Beginning: ");
    scanf("%d", &new_nump);
    struct node *newp = malloc(sizeof(struct node));
    if (newp == NULL)
    {
        printf("Memory is not assigned\n");
        exit(EXIT_FAILURE);
    }
    newp->data = new_nump;
    newp->link = tail->link;
    tail->link = newp;
    return tail;
}
struct node *add_end(struct node *tail) // Function for adding node at end

{
    int new_num;
    printf("Enter a new number that you want to add at end: ");
    scanf("%d", &new_num);

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory is not assigned\n");
        exit(EXIT_FAILURE);
    }

    temp->data = new_num;
    temp->link = NULL;

    temp->link = tail->link;
    tail->link = temp;
    tail = tail->link;

    return tail;
}

void print(struct node *tail) // Create a function for print Linked list
{
    struct node *p = tail->link;
    do
    {
        printf("%d\n", p->data);
        p = p->link;
    } while (p != tail->link);
}
int main()
{
    struct node *tail;
    tail = addEmpty(45);
    tail = add_begin(tail);
    tail = add_end(tail);
    print(tail);
    return 0;
}
