#include<stdio.h>
int main(){
    int n,item;
    scanf("%d%d",&n,&item);
    int array[n];
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    for(int i=0;i<n;i++){
        if(array[i]==item){
            printf("%d\n",array[i]);
            break;
        }
    }
}