#include <stdio.h>
//使用者輸入N，印出N個"*"符號。
int main(){
    int i,N;
    printf("N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        printf("*");
    }
}
