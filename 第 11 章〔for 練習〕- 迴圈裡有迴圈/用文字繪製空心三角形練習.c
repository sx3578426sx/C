#include <stdio.h>
//    �ήy�Ф覡���ŤߤT����
int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if(i == N || j == 1 || j == i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }
}
