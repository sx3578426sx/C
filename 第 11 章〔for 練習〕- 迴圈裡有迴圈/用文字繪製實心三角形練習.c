#include <stdio.h>

int main(){
    //    用座標方式的三角形
    /*

    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if(i == N || j == N || i > j){
                printf("*");
            }
        }
        printf("\n");
    }
    */
    /*
    假設要印
    *
    **
    ***
    printf("*\n");
    printf("**\n");
    printf("***\n");
    從中得知重複的，假設*為i，可先以3為例子
*/
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){        // i = 1, 2, 3
        printf("*");
        for(j = 1; j < i; j++){       // 印 i 個星星
            printf("*");
        }
        printf("\n");
    }
}
