#include <stdio.h>
//使用者輸入N，算出1~N整數和。

int main(){
    int i,N;
    int sum = 0;
    printf("N = ");
    scanf("%d", &N);
    for(i = 0; i <= N; i++){
        sum = sum + i;
    }
    printf("SUM = %d", sum);

}
