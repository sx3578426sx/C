#include <stdio.h>
/*
���ϥΪ̿�J10�Ӿ�ƫ�A��J�n�d�ߪ��d���A
��ܿ�J��Ƥ����Q�]�t�b������ơC
(��J00�h����)
*/

int main(){
    int i[10] = {0};
    int j;
    printf("�п�J10�Ӿ��:\n");
    for(j = 1; j <= 10; j++){
        scanf("%d", &i[j-1]);
    }

    /*�ϥΪ̿�J�W���P�U���A�L�X�d�򤺪��Ʀr*/
    while(1){
        int N1, N2;
        printf("�п�J�d��(�W��/�U��): ");
        scanf("%d %d", &N1, &N2);
        if(N1 == 0 && N2 == 0){     //�p�G�ϥΪ̿�J 0 0 �h����
            break;
        }

        printf("Ans: ");
        for(j = 1; j <= 10; j++){
            //���b�A�קK�ϥΪ̥���J�U���A��J�W��
            if(i[j-1] >= N1 && i[j-1]<= N2 || i[j-1] >= N2 && i[j-1]<= N1){
                printf("%d ", i[j-1]);
            }
        }
        printf("\n");

    }
    return 0;
}
