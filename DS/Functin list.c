#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node* MakeNode(int data){
    node* tem=malloc(sizeof(node));
    tem->data=data;
    tem->next=NULL;
    return tem;
}
int main(){
    node*p=MakeNode(5);
    node*q=MakeNode(6);
    node*r=MakeNode(7);
    node*s=MakeNode(8);
    node*t=MakeNode(9);
    p->next=q;
    q->next=r;
    r->next=s;
    s->next=t;
    node*current=p;
    while(current!=NULL){
        printf("%d",current->data);
        current=current->next;
    }
 return 0;
}