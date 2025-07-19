#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
node* head,*tail;
node* make_node(int data){
    node* temp=malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
void insert_at_back(int data){
    node*tmp=make_node(data);
    if(head==NULL)
    head=tail=tmp;
    else{
        tail->next=tmp;
        tail=tmp;
    }
}
void print_node(){
    node* temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
        printf("\n");
    }
}
 void delete_first(){
    node*temp=head;
    head=head->next;
    free(temp);
 }
int main(){
    head=tail=NULL;
   insert_at_back(5);
   insert_at_back(7);
    print_node();
    delete_first();
    print_node();


    

    return 0;
}