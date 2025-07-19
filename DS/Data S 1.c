#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
int main()
{
    // struct node h;
    node *p;
    p = malloc(sizeof(node));
    p->data = 5;

    node *q;
    q = malloc(sizeof(node));
    p->next = q;
    q->data = 7;
    q->next = NULL;
    // printf("%d  %d",p->data,q->data);
    node *tem;
    tem = p;
    while (tem != NULL)
    {
        printf("%d", tem->data);
        tem = tem->next;
    }
}
