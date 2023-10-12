#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
void isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("Stack is Completely full :-(\n"); //Stack is Full
    }
    else
    {
        printf("Stack is not completely Full :-)\n"); // Stack is not full (Empty) .
    }
}
void isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("stack is Empty :-)\n"); //Stack is empty
    }
    else
    {
        printf("Stack is not Empty :-(\n"); // Satck is not empty
    }
}
void push(struct stack *ptr, int val)     // Push function to push an element in stack memory
{ 
    if (ptr->top == ptr->size - 1)
    {
        printf("Stack Overflow , Element %d Cannot push in stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
void pop(struct stack *ptr)         // Pop function to remove top most element in the stack.
{                                 
    if (ptr->top == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        ptr->top--;
    }
}
void peek(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("There is no elements in stack memory :-(");
    }
    else
    {
        printf("The peek(Top most element) of stack is : %d", ptr->arr[ptr->top]);
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack is created in the memory having no elements :\n");
    isFull(sp);
    
    push(sp, 20);
    push(sp, 140);
    push(sp, 250);
    push(sp, 435);
    push(sp, 55); // --> Pusshed 5 values in stack.

    printf("Stack formed is :\n");
    for (int i = 0; i <=sp->top; i++)
    {
        printf("%d\n", sp->arr[i]);
    }
    isFull(sp);
    

    
    pop(sp);
    pop(sp);
    pop(sp);
    printf("Stack formed is(After popping out elements in stack) :\n");
    for (int i = 0; i <=sp->top; i++)
    {
        printf("%d\n", sp->arr[i]);
    }
    
    peek(sp);

    return 0;
}