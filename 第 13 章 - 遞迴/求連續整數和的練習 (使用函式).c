#include <stdio.h>

int sum(int);
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("Sum = %d\n", sum(N));
    return 0;
}
//���Nfor�j��t�g�@�Ө禡
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
//�[��W�z�W�h�A�g�X�i����for�j��
int sum(int N){
    if(N == 1){
        return 1;
    }
    else{
        return sum(N-1) + N;
    }
}
