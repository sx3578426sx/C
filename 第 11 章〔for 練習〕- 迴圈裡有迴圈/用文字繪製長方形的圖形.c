#include <stdio.h>
//讓使用者輸入正整數N，印出N乘N個"*"組成的圖形
int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){//第幾行
        for(j= 1; j <= N; j++){//第幾個
            printf("*");
        }
            printf("\n");
    }
    return 0;
}
