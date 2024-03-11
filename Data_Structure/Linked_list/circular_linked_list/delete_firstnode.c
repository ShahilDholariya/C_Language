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
struct node *dlt_begin(struct node *tail)
{
    if (tail == NULL)
    {
        return tail;
    }
    else if (tail->link == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    else
    {
        struct node *dlt = tail->link;
        tail->link = dlt->link;
        free(dlt);
        dlt = NULL;
        return tail;
    }
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
    int n;
    printf("Enter the number of node that you want:");
    scanf("%d", &n);
    struct node *tail;
    tail = addEmpty(45);
    for (int i = 0; i < n; i++)
    {
        tail = add_end(tail);
    }
    printf("Before Deletation:\n");
    print(tail);
    tail = dlt_begin(tail);
    printf("After deletating First node:\n");
    print(tail);
    return 0;
}
