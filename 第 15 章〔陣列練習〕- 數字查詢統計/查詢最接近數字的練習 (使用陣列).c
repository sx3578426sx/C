#include <stdio.h>
#include <stdlib.h>//abs�禡�w
/*
���ϥΪ̿�J10�Ӿ�ƫ�A��J�n�d�ߪ��Ʀr��A
��ܿ�J��Ƥ��A�̱��񦹼ƪ��@�Ӿ�ơF
�Y����ӬۦP���񪺭ȡA�h�����p�����ӭȡC
(��J0�h����)
*/

int main(){
    //�ϥΪ̿�J10�Ӿ��
    int i, f, n[10]={0};
    printf("�п�J10�Ӿ��:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &n[i]);
    }

    while(1){
        printf("�d�߭�: ");
        scanf("%d",&f);
        //�p�G�ϥΪ̿�J 0 �h����
        if(f == 0){
            printf("�����d�ߡC\n");
            break;
        }
        //�]�w��l��
        //�]����l�ȬO�qn[0]�}�l�A�ҥH�j��q1�}�l��
        int nearest_n = n[0];
        for(i = 1; i <= 10; i++){
            /*�p�G������񪺼Ʀrf-n[i]�A�ۮt���Ȥ�N-nearset_n���񪺭Ȥp
            �Φ���Ӥ@�˱��񪺭ȡA�h������p�����ӭ�(n[i]<nearest_n)*/
            if(abs(f-n[i]) < abs(f-nearest_n) || (abs(f-n[i]) == abs(f-nearest_n) && n[i] < nearest_n)){
                nearest_n = n[i];
            }
        }
        printf("%d\n", nearest_n);
    }
    return 0;
}
