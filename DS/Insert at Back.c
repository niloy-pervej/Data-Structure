#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}n;

 n* MakeNode(int data){
    n*temp=malloc(sizeof(n));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

  void InsertatBack(n**head,n**tail,int data){
    n* temp=MakeNode(data);
    if(*head==NULL){  //don't understand the conditon

        *head=*tail=temp;
    }
    else{
        (*tail)->next=temp;
        *tail=temp;
    }
  }


  void PrintList(n* head){  //why head
    n*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
 }


  int main(){
    n* head,*tail;
    head=tail=NULL;
    int n,data;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        InsertatBack(&head,&tail,data);
    }
    PrintList(head);//why not address
  }

