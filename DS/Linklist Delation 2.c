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
    if(head!=NULL){
        node*temp=head;
        head=head->next;
        free(temp);
   }
 }
 void delete_any(int key){
     node*slow,*fast;
     slow=NULL;
     fast=head;
     while(fast!=NULL&&fast->data!=key){
        slow=fast;
        fast=fast->next;
     }
     slow->next=fast->next;
     free(fast);
 }
int main(){
    head=tail=NULL;
   insert_at_back(1);
   insert_at_back(2);
   insert_at_back(3);
   insert_at_back(4);
   insert_at_back(5);
    print_node();
    delete_first();
    print_node();
    delete_any(4);
    print_node();


    

    return 0;
}