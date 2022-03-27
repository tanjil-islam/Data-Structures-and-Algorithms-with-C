#include<stdio.h>
#define STACK_MAX 20

typedef struct
{
    int top;
    int data[STACK_MAX];
} stack;

void push(stack *s, int item )
{
    s->data[s->top] = item;
    s->top += 1;
}

int pop(stack *s)
{
    int data;
    s->top -= 1;
    data = s->data[s->top];
    return data;
}

int main()
{
    stack mystak;
    mystak.top = 0;
    push(&mystak,10);
    push(&mystak,20);
    push(&mystak,30);
    push(&mystak,40);
    push(&mystak,50);
    printf("%d",pop(&mystak));
}
