#include <stdio.h>

int sum(int);
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("Sum = %d\n", sum(N));
    return 0;
}
//先將for迴圈另寫一個函式
/*
int sum(int N){
    int i;
    int sum = 0;
    for(i = 0; i <= N; i++){
        sum += i;
    }
    return sum;
}
*/
/*
sum(1) = 1;
sum(2) = sum(1) + 2;
sum(3) = sum(2) + 3;
sum(N) = sum(N-1) + N;
*/
//觀察上述規則，寫出進階的for迴圈
int sum(int N){
    if(N == 1){
        return 1;
    }
    else{
        return sum(N-1) + N;
    }
}
