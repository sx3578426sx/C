#include <stdio.h>


int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    //�k�W�����
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

    //�k�W���Ť�
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

