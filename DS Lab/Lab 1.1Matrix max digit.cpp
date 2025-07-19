#include<stdio.h>
int main(){
    int R, C;
    printf("Enter the numbers of rows and columns : \n");
    scanf("%d%d", &R, &C);
    int array[R][C];
    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            scanf("%d", &array[i][j]);
    
    for(int i = 0; i < R; i++){
        int max = array[i][0];
        for(int j = 1; j < C; j++){
            if(max < array[i][j])
                max = array[i][j];
        }
        printf("%d\n", max);
    }
    return 0;
}