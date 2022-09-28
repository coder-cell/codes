#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct stack
{
    struct node *n1;
    struct node *top;
};

void push(struct stack *s1)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Error\n");
        return;
    }
    printf("Enter data :\t");
    scanf("%d", &newnode->data);

    newnode->next = s1->top;
    s1->top = newnode;
}

int pop(struct stack *s1)
{
    int data;
    struct node *n1;
    if (s1->top == NULL)
    {
        printf("underflow\n");
        return -1;
    }
    data = s1->top->data;
    n1 = s1->top;
    s1->top = s1->top->next;
    free(n1);
    return data;
}

int main()
{
    int data;
    char c;
    struct stack s1;
    s1.n1 == NULL;
    s1.top == NULL;
    printf("Enter p to push or o to pop or e to exit :\n");

    do
    {
        fflush(stdin);
        scanf("%c", &c);
        switch (c)
        {
        case 'p':
            push(&s1);
            break;
        case 'o':
            data = pop(&s1);
            printf("%d\n", data);
            break;
        }

    } while (c != 'e');

    return 0;
}