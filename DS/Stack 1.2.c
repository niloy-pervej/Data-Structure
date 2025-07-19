#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct stack {
    struct node* top;
};

struct stack* create_stack() {
    struct stack* st = malloc(sizeof(struct stack));
    st->top = NULL;
    return st;
}

void push(struct stack* st, int data) {
    struct node* nd = malloc(sizeof(struct node));
    nd->data = data;
    nd->next = st->top;
    st->top = nd;
}

int pop(struct stack* st) {
    if (st->top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    int data = st->top->data;
    struct node* temp = st->top;
    st->top = st->top->next;
    free(temp);
    return data;
}

int peek(struct stack* st) {
    if (st->top != NULL)
        return st->top->data;
    else {
        printf("Stack is empty\n");
        return -1;
    }
}

int is_empty(struct stack* st) {
    return st->top == NULL;
}

int main() {
    struct stack* stack = create_stack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    printf("Top: %d\n", peek(stack));
    return 0;
}