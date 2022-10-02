#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(struct node *root, int data)
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if (data < root->data)
    {
        root->left = create_node(root->left, data);
    }
    else if (data >= root->data)
    {
        root->right = create_node(root->right, data);
    }

    return root;
}

void inorder(struct node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d\t", root->data);
    inorder(root->right);
}

void preorder(struct node *root)
{
    if (root == NULL)
        return;
    printf("%d\t", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d\t", root->data);
}

int main()
{
    int i, n, data;
    struct node *root = NULL;
    printf("Enter no of nodes to create :\t");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Data %d :\t", i + 1);
        scanf("%d", &data);
        root = create_node(root, data);
    }

    printf("\ninorder : \t");
    inorder(root);
    printf("\npreorder : \t");
    preorder(root);
    printf("\npostorder : \t");
    postorder(root);

    return 0;
}