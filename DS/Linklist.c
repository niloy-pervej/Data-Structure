#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}n;
n*head,*tail,*slow,*fast;


n* MakeNode(int data)
{
    n*temp=malloc(sizeof(n));
    temp->data=data;
    temp->next=NULL;
    return temp;
}


void InsertatBack(int data)
{
    n*temp=MakeNode(data);
    if(head==NULL)
    head=tail=temp;
    else{
        tail->next=temp;
        tail=temp;//why not temp=tail? cz temp ke NULL banate hobe.
    }
}


void InsertatFront(int data)
{
    n*temp=MakeNode(data);
    if(tail==NULL)
    head=tail=temp;
    else{
        temp->next=head;
        head=temp;
    }
}


void InsertatMiddle(int value,int key)
{
    n*temp=MakeNode(value);
    slow=NULL;
    fast=head;
    while(fast!=NULL&&fast->data!=key){
        slow=fast;
        fast=fast->next;
    }

    slow->next=temp;  //add before key;
    temp->next=fast;

    //      add after key:
    
    // if(fast!=NULL){
    //     temp->next=fast->next;
    //     fast->next=temp;
    // }
    // else{
    //     slow->next=temp;
    //     temp->next=fast;
    // }
       
}


void PrintfList(){
    n*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


int main(){
    head=tail=NULL;
    int n,data;
    printf("Enter the value of n for Insert at Back:\n");
    scanf("%d",&n);
    printf("Enter your data:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        InsertatBack(data);
    }
    printf("Back Print list:\n");
    PrintfList();
    int value,key;
    printf("\nEnter value and key:\n");
    scanf("%d%d",&value,&key);
    InsertatMiddle(value,key);
    printf("After added middle value:\n");
    PrintfList();
    head=tail=NULL;
    int n2,data2;
    printf("\nEnter the value of n for Insert at Front:\n");
    scanf("%d",&n2);
    printf("Enter your data:\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&data2);
        InsertatFront(data2);
    }
    printf("Front list:\n");
    PrintfList();
    int value2,key2;
    printf("\nEnter value and key:\n");
    scanf("%d%d",&value2,&key2);
    InsertatMiddle(value2,key2);
    printf("After added middle value:\n");
    PrintfList();
}