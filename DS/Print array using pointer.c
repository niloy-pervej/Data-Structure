#include<stdio.h>
int main(){

    int array[]={1,2,3,4,5};
    int* ptr=array;
    int size=5;
    while(size>0){
        printf("%d\t",*ptr);
        ptr++;
        size--;
    }

    return 0;
}