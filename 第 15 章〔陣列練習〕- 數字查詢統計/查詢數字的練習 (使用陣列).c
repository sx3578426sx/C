#include <stdio.h>
/*
���ϥΪ̿�J5�Ӿ�ƫ�A�i�H�̷ӿ�J�����Ǹ��X�d�ߩҿ�J����ơC
(�d�߶��Ǹ��X��0�ɫh����)
*/

int main(){
    int i; //�ĴX����J
    int Q[5] = {0}; //�C����J�Ȫ��s�����
    int j, k, N;

    for(i = 1; i <= 5;i++){
        printf("%d:",i);
        scanf("%d", &N);
        Q[i - 1] = N;   //�]�}�C�q��0��}�l�A�G�n-1
    }

    /*
    ��d�߸��X��0�ɴN"�����d��"
    �p�G�d��1~5 �h�L�XQ�}�C�۹�L���d�߭ȡA
    �_�h�L�X"�W�X�d�߽d��!"*/
    while(1){
        printf("Q: ");
        scanf("%d",&j);
        if(j == 0){
            printf("�����d�ߡC\n");
            break;
        }
        else if(j >= 1 && j < i){
            printf("%d\n", Q[j - 1]);
        }
        else{
            printf("�W�X�d�߽d��!\n");
        }
    }
    return 0;
}

