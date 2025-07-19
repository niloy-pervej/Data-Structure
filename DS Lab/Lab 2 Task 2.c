#include<stdio.h>
int main(){

    char sent[100];
    gets(sent);
    char *str=sent;
    while(*str){
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str=='U' )
        {
            printf("%c",*str);
        }
        str++;
    }

    return 0;
}