#include<stdio.h>
int main(){
    int M, N;
    scanf("%d%d", &M, &N);
    int arr[M], brr[N], crr[M + N];
    for(int i = 0; i < M; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < N; i++) scanf("%d", &brr[i]);
    for(int i = 0; i < M; i++) crr[i] = arr[i];
    for(int i = 0; i < N; i++) crr[M + i] = brr[i];

    for(int i = 0; i < M + N; i++){
        for(int j = i + 1; j < M + N; j++){
            if(crr[i] > crr[j]){
                int temp = crr[i];
                crr[i] = crr[j];
                crr[j] = temp;
            }
        }
    }

    for(int i = 0; i < M + N; i++)
        printf("%d ", crr[i]);
    return 0;
}