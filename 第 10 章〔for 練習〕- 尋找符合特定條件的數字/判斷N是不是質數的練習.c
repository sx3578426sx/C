#include <stdio.h>
//判斷N是否為質數，質數的因數只有自己跟1，但0跟1不是質數。
int main(){
    int i, N;
    int count = 0;
    printf("N = ");
    scanf("%d", &N);
    if(N <= 1){
        printf("%d 不是質數。", N);
    }
    else{
        for(i = 2; i < N; ++i){
            // i 必須要< N才不會把自己算進去。
            if(N % i == 0){
                count++;
            }
        }
        if(count == 0){
            printf("%d 是質數。", N);
        }
        else{
            printf("%d 不是質數。", N);
        }
    }
}
