#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void createlist(struct node *start, int n);
void traverse_list(struct node *start);
void delete_last(struct node *start);

void main()
{
    char letter;
    int n;
    struct node list;
    list.data = 0;
    list.link = NULL;
    do
    {
        printf("Enter i to insert, t to traverse, e to exit, d for delete last :\t");
        fflush(stdin);
        scanf("%c", &letter);
        switch (letter)
        {
        case 'i':
            printf("Enter no of elements :\t");
            scanf("%d", &n);
            createlist(&list, n);
            break;
        case 't':
            traverse_list(&list);
            break;
        case 'd':
            delete_last(&list);
            break;
        default:
            break;
        }
    } while (letter != 'e');
}

void delete_last(struct node *start)
{
    struct node *current, *delete_element;
    current = start;
    if (current == NULL)
    {
        printf("Underflow\n");
        return;
    }
    if (current->link == NULL)
    {
        // delete_element = current;
        // free(delete_element);
        start = NULL;
        return;
    }
    while (current->link->link != NULL)
    {
        current = current->link;
    }
    delete_element = current->link;
    current->link = NULL;
    free(delete_element);
}

void createlist(struct node *start, int n)
{
    struct node *current, *newnode;
    int i;
    if (start == NULL || n == 0)
    {
        return;
    }

    current = start;

    while (current->link)
    {
        current = current->link;
    }
    // printf("Enter element 1 :\t");e
    // scanf("%d", &current->data);
    // current->link = NULL;
    for (i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        current->link = newnode;
        newnode->link = NULL;
        current = current->link;
        printf("Enter %d element :\t", i + 1);
        scanf("%d", &current->data);
    }
}

void traverse_list(struct node *start)
{
    struct node *current = start->link;
    if (current == NULL)
    {
        printf("No elements \n");
        return;
    }
    while (current)
    {
        printf("%d\t", current->data);
        current = current->link;
    }
    printf("\n");
}