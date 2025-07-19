#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *makeNode(int data)
{
    Node *temp = malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    return temp;
}



int main()
{
    Node *p, *q, *r, *s;

    p = makeNode(5);

    q = makeNode(7);
    p->next = q;

    r = makeNode(4);
    q->next = r;

    s = makeNode(1);
    r->next = s;

    Node *temp;
    temp = p;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}