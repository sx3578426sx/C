#include <stdio.h>

int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){ //�C�@��
        for(j = 1; j <= N; j++){ //�C�@�榳�X��
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
