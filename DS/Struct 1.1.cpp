#include<stdio.h>
#include<stdlib.h>

    struct stack{
        int data;
        int top;
        int capacity;
        struct stack*next;
    };
    struct stack* create_stack(){
        struct stack* st = malloc(sizeof(struct stack));
        st->top=NULL; 
        st->capacity=MaxCapacity;
        return st;
    }
    void push(struct stack*st,int data){
        struct node* nd=malloc(sizeof(sturct stack));
        nd->data=data;
        nd->next=st->top;
        st->top=nd;
    }
    void pop(struct stack* st){
        int data=st->top->data;
        st->top=st->top->next;
        return data;
    }
    int peek(struct stack* stack){
        if(stack->top!=NULL) return stack->top->data;
        else{
            printf("Stack is empty");
            return -1;
        }
    }
    int is_empty(struct stack* st){
        return st->top=NULL;
    }
 int main(){
    struct stack* stack= create_stack(100);
    push(stack,10);
    push(stack,20);
    push(stack,30);
    printf("Top %d", peek(stack));
    return 0;

 }
