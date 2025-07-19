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

void InsertatFront(n**head,n**tail,int data){
  n*temp=MakeNode(data);
  if(*head==NULL)//     1
  *head=*tail=temp;
  else{
    temp->next=*head;
    *head=temp;
  }
}

void PrintfList(n*head){//why not tail
  n*temp=head;
  while(temp!=NULL)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }

}

int main(){
  n*head,*tail;
  head=tail=NULL;
  int n,data;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&data);
    InsertatFront(&head,&tail,data);
  }
  PrintfList(head);
}