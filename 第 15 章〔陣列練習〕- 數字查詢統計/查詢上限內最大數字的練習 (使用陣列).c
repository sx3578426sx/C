#include <stdio.h>
/*
���ϥΪ̿�J10�Ӿ�ƫ�A��J�n�d�ߪ��Ʀr��A
��ܿ�J��Ƥ����̱���W�����@�Ӿ�ơC
(��J0�h����)
*/

int main(){
    int i[10] = {0};
    int j;
    printf("�п�J10�Ӿ��:\n");
    for(j = 1; j <= 10; j++){
        scanf("%d", &i[j-1]);   //��J10�Ӿ��
    }

    /*�ϥΪ̿�J�W���A�L�X�W���d�򤺳̤j���Ʀr*/
    while(1){
        int N;
        printf("�n�d�ߪ��Ʀr: ");
        scanf("%d", &N);
        if(N == 0){     //�p�G�ϥΪ̿�J 0 �h����
            break;
        }

        int max = -1;       //��max��Ҧ��������A���I�O��ƥu��O����
        printf("�̱��񪺼Ʀr�O: ");
        for(j = 1; j <= 10; j++){
            //����X��N�p���ȡA�M��n��max�j�A
            //max�쥻���̤p���A���񥦤j���N�|���Nmax
            //�]���Ĥ@�������max=-1�A�ҥH�]�n������
            if(i[j-1] <= N && (i[j-1] >= max || max == -1)){
                max = i[j - 1];
            }
        }

        if(max != -1){      //���b�A�קK�ϥΪ̬ҿ�J<=-1����
            printf("%d", max);
        }
        printf("\n");
    }
    return 0;
}

