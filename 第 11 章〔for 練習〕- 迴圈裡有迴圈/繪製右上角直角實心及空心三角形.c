#include <stdio.h>


int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    //右上角實心
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if(i < j || i == j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    //右上角空心
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if(i == 1 || j == N || i == j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

