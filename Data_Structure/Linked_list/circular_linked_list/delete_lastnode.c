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

struct node *dlt_last(struct node *tail)
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
        while (dlt->link != tail)
        {
            dlt = dlt->link;
        }
        dlt->link = tail->link; 
        free(tail);
        tail = dlt;
        return tail;
    }
}

struct node *add_end(struct node *tail)
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
    temp->link = tail->link;
    tail->link = temp;
    tail = tail->link;

    return tail;
}

void print(struct node *tail)
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
    printf("Enter the number of nodes that you want: ");
    scanf("%d", &n);

    struct node *tail;
    tail = addEmpty(45);

    for (int i = 0; i < n; i++)
    {
        tail = add_end(tail);
    }

    printf("Before Deletion:\n");
    print(tail);

    tail = dlt_last(tail);

    printf("After deleting the last node:\n");
    print(tail);

    return 0;
}
