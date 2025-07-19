#include<stdio.h>
int main(){
    int array[]={1,2,3,4,5,6,22,45,65,76,87};
    int l=0,r=10;
    int item;
    scanf("%d",&item);
    int m;
    while(l<=r){
        m=(l+r)/2;
        if(array[m]==item){
            printf("%d",m);
            break;
        }
        else{
            if(array[m]<item)
            l=m+1;
            else
            r=m-1;
        }
    }
}