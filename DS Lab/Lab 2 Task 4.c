#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int *start=&array[0];
    int *end=&array[n-1];
    while(start<end){
        int tem=*start;
        *start=*end;
        *end=tem;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}