#include <stdio.h>

int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);

    //�L�Ĥ@��A�L���ᴫ��
    for(i = 1; i <= N; i++){
        printf("*");
    }
    printf("\n");

    /*
    �ĤG����L�@��"*"�A�M�ᤤ���L�ťաA
    �ҥH�n�����Ĥ@���̫�@��A
    �٦��C���Y����"*"�A�N�ON-2
    */
    for(i = 1; i <= N-2; i++){      //�o��O�����Ĥ@���̫�@��
        printf("*");
        for(j = 1; j <= N-2; j++){  //�o��O�����C���Y��
            printf(" ");
        }
        printf("*\n");                  //�o��O�C�檺��"*"�A�L���N����
    }

    //�L�̫�@��
    for(j = 1; j <= N; j++){
        printf("*");
    }
    return 0;
}
