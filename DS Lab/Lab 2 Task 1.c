#include<stdio.h>
void Swap(int *a,int *b);
int main(){

    int x,y;
    printf("Enter Two Numbers x and y:\n");
    scanf("%d%d",&x,&y);
    Swap(&x,&y);
    printf("After Swaping:\nx=%d  y=%d",x,y);
}
void Swap(int *a,int *b){
   int tem=*a;
   *a=*b;
   *b=tem;
}