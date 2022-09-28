#include <stdio.h>

struct stack
{
    int max;
    int data[100];
    int top;
};

void push(struct stack *s1)
{
    int data;
    if (s1->top == s1->max)
    {
        printf("overflow\n");
        return;
    }
    printf("Enter data :\t");
    scanf("%d", &data);
    s1->data[++s1->top] = data;
}

int pop(struct stack *s1)
{
    if (s1->top == -1)
    {
        printf("Underflow\n");
        return -1;
    }
    return s1->data[s1->top--];
}

int main()
{
    int data;
    struct stack s1;
    char c;
    s1.top = -1;
    s1.max = 5;
    printf("Enter p to push o to pop e to exit:\n");
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
            printf("%d\t", data);
            break;
        }
    } while (c != 'e');

    return 0;
}