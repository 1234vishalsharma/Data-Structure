#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int *stack;
    int size;
    int top;
};
int isEmpty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        printf("Stack is full");
        return 0;
    }
}
int main()
{
    struct stack *s;
    s->top=-1;
    s->size=10;
    s->stack=(int *) malloc(s->size*sizeof(int));       
    s->stack[0]=54;
    s->top++; 
    if(isEmpty(s)){
        printf("Stack is empty");
    }
    else{
        printf("Stack is not empty");
    }
    return 0;
}