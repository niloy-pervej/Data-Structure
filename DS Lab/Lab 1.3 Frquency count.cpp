#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int a[10] = {0}, rem;
    while (N != 0){
        rem = N % 10;
        N = N / 10;
        a[rem]++;
    }
    for(int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}