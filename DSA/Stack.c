#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int *arr;
    int size;
    int top;
}stack;

stack* createStack(int size){
    static stack s;
    s.size= size;
    s.top= -1;
    s.arr= (int*)malloc(sizeof(int)*size);
    return &s;
}

void deleteStack(stack *s){
    free(s->arr);
}

int isEmpty(stack *s){
    if (s->top== -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(stack *s){
    if (s->top== s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(stack* s, int data){
    if (isFull(s)){
        printf("Stack is full!!\n");
        return;
    }
    s->arr[++s->top]= data;
}

void pop(stack* s){
    if (isEmpty(s)){
        printf("No elements to pop!!\n");
        return;
    }
    s->top--;
}

int peek(stack* s){
    if (isEmpty(s)){
        printf("Stack is empty!!\n");
        return -1;
    }
    return s->arr[s->top];
}

int main(){
    stack* stk1= createStack(5);
    push(stk1, 5);
    push(stk1, 2);
    push(stk1, 3);

    printf("%d\n", peek(stk1));

    pop(stk1);

    printf("%d\n", peek(stk1));

    pop(stk1);
    pop(stk1);
    pop(stk1);
    peek(stk1);

    deleteStack(stk1);
    return 0;
}