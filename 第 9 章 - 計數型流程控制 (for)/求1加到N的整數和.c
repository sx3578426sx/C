#include <stdio.h>
//�ϥΪ̿�JN�A��X1~N��ƩM�C

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
