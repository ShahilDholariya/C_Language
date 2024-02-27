#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *l;
    struct node *r;
};
struct node *createnode(int data) // Create a new node
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->l = new->r = NULL;
    return new;
}
// Create a function for insert a new node into the binary search tree
struct node *insert(struct node *root, int data)
{
    struct node *newNode = createnode(data);

    if (root == NULL)
    {
        return newNode;
    }

    struct node *current = root;
    struct node *parent = NULL;

    while (current != NULL)
    {
        parent = current;

        if (data < current->data)
        {
            current = current->l;
        }
        else if (data > current->data)
        {
            current = current->r;
        }
        else
        {
            return root;
        }
    }

    if (data < parent->data)
    {
        parent->l = newNode;
    }
    else if (data > parent->data)
    {
        parent->r = newNode;
    }
    else
    {
        return root;
    }
}

void traversal(struct node *root)
{
    if (root != NULL)
    {
        traversal(root->l);
        printf("%d ", root->data);
        traversal(root->r);
    }
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 34);
    insert(root, 45);
    insert(root, 12);
    insert(root, 40);
    insert(root, 89);

    traversal(root);
    printf("\n");
    return 0;
}