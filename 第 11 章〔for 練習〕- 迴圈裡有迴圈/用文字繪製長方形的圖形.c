#include <stdio.h>
//���ϥΪ̿�J�����N�A�L�XN��N��"*"�զ����ϧ�
int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){//�ĴX��
        for(j= 1; j <= N; j++){//�ĴX��
            printf("*");
        }
            printf("\n");
    }
    return 0;
}
