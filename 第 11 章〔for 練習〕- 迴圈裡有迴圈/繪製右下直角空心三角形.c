#include <stdio.h>
/*
 _ _ *
 _ * *
 * * *
(1,1)(1,2)(1,3)
(2,1)(2,2)(2,3)
(3,1)(3,2)(3,3)
�q�y�еo�{�A�q�k�W�쥪�U���׹﨤�y�СA
�ۥ[��Ҭ�N+1
 */
int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if(i == N || j == N || i + j == N + 1){
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

