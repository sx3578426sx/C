#include <stdio.h>
//�L�XN��M�����O�T�����ƪ����ơCex:1~10�L�X2,4,8,10
int main(){
    int N, M, t;
    printf("N: ");
    scanf("%d", &N);
    printf("M: ");
    scanf("%d", &M);
    if(M < N){
        t = N;
        N = M;
        M = t;
    }
    for(N; N <= M; N++){
        if(N % 3 != 0 && N % 2 == 0){
                printf("%d\n", N);
        }
    }
}
