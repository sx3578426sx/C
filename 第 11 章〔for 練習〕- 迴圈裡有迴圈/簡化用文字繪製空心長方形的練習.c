#include <stdio.h>

int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){ //每一行
        for(j = 1; j <= N; j++){ //每一行有幾個
            if(i == 1 || i == N || j == 1 || j ==N){
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
