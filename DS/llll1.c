#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    Node *p;
    p = malloc(sizeof(Node));
    p->data = 5; // data part of p

    Node *q;
    q = malloc(sizeof(Node));
    p->next = q; // link part, link p with q
    q->data = 7; // data part of q

    Node *r;
    r = malloc(sizeof(Node));
    q->next = r; // link part, link q with r
    r->data = 1;

    Node *s;
    s = malloc(sizeof(Node));
    r->next = s;
    s->data = 4;

    s->next = NULL; // end of the list

    Node *temp;
    temp = p;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}