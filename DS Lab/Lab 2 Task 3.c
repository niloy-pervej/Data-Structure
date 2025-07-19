#include<stdio.h>
int main(){

    char str[100];
    fgets(str,sizeof(str),stdin);
    char *ptr=str;
    int count=-1;
    while(*ptr!='\0'){
        count++;
        ptr++;
    }
    printf("%d",count);
    return 0;
}