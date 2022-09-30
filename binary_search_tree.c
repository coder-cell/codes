#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void binary_search_tree(struct node *root, int data)
{
    struct node *newnode, *temp;
    if (root->data == 0)
    {
        root->data = data;
        printf("%d\n",root->data);
        return;
    }
    temp = root;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    while (temp != NULL)
    {
        if (data < temp->data)
            temp = temp->left;
        else
            temp = temp->right;
            printf("inside while %u\n",temp);
    }
    temp = newnode;
        printf("%d\t",temp->data);
        printf("\n");
}

void inorder(struct node *root){
// struct node *temp;
    if(root == NULL)return;
    // temp = root;
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}

void preorder(struct node *root){
// struct node *temp;
    if(root == NULL)return;
    // temp = root;
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root){
// struct node *temp;    
    if(root == NULL)return;
    // temp = root;
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
}

int main()
{
int data;
char c;
struct node root;
root.data = 0;
root.left = NULL;
root.right = NULL;

for (int i = 0; i < 5; i++)
{
    printf("Data %d :\t",i+1);
    scanf("%d", &data);
    binary_search_tree(&root,data);
    // printf("data = %d :\t",root.data);
}
    // printf("left = %d\t right = %d :\t",root.left->data, root.right->data);
printf("\ninorder : \t");
inorder(&root);
printf("\npreorder : \t");
preorder(&root);
printf("\npostorder : \t");
postorder(&root);
    return 0;
}