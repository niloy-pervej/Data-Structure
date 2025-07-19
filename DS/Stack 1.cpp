#include <iostream>
#include <cstdlib>
using namespace std;

struct stack {
    int* data;
    int top;
    int capacity;
};

struct stack* Create_Stack(int cap) {
    struct stack* st = new stack;
    st->capacity = cap;
    st->top = -1;
    st->data = new int[cap];
    return st;
}

void Push(struct stack* st, int value) {
    if (st->top == st->capacity - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    st->data[++st->top] = value;
    cout << value << " pushed to stack\n";
}

int pop(struct stack* st) {
    if (st->top == -1) {
        cout << "Stack Underflow\n";
        return -1;
    }
    return st->data[st->top--];
}

int peek(struct stack* st) {
    if (st->top == -1) {
        cout << "Stack is empty\n";
        return -1;
    }
    return st->data[st->top];
}

bool is_empty(struct stack* st) {
    return st->top == -1;
}

void free_stack(struct stack* st) {
    delete[] st->data;
    delete st;
}