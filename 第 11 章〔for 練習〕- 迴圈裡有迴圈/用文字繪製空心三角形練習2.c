#include <stdio.h>

/*
printf("*\n");               //�L1�ӬP�P                                          + ����
printf("**\n");             //�L1�ӬP�P + i �Ӫť� + 1�ӬP�P + ���� (i = 0)
printf("*  *\n");           //�L1�ӬP�P + i �Ӫť� + 1�ӬP�P + ���� (i = 1)
printf("*    *\n");         //�L1�ӬP�P + i �Ӫť� + 1�ӬP�P + ���� (i = 2)
printf("*****\n");      //�L1�ӬP�P + 3 �ӬP�P + 1�ӬP�P + ����
�q�W�z�i�o�����������A�ҥH�i�H�g�j��C
*/
int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    printf("*\n");
    for(i = 0; i <= N-3; i++){ //�����Ĥ@�B�ĤG��B�̫�@��A�ҥH�ON-3
        printf("*");
        for(j = 1;  j <= i; j++){ //�L i �Ӫť�
            printf(" ");
        }
        printf("*\n");
    }
    for(i = 1; i <= N; i++){
        printf("*");
    }
}
