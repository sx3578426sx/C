#include <stdio.h>
//�P�_N�O�_����ơA��ƪ��]�ƥu���ۤv��1�A��0��1���O��ơC
int main(){
    int i, N;
    int count = 0;
    printf("N = ");
    scanf("%d", &N);
    if(N <= 1){
        printf("%d ���O��ơC", N);
    }
    else{
        for(i = 2; i < N; ++i){
            // i �����n< N�~���|��ۤv��i�h�C
            if(N % i == 0){
                count++;
            }
        }
        if(count == 0){
            printf("%d �O��ơC", N);
        }
        else{
            printf("%d ���O��ơC", N);
        }
    }
}
