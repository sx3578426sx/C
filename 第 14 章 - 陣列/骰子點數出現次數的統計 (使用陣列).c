#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�Y���d������l�A�D1~6�X�{�F�X��
/*�N�U��쥻�g���ܪ����{���A�ΰ}�C���覡��g
int main(){
    int count1 = 0, count2 = 0, count3 = 0;
    int count4 = 0, count5 = 0, count6 = 0;
    srand(time(0));
    int i;
    for(i = 0; i <= 6000; i++){
        int dice;
        dice = rand() % 6 + 1;
        switch(dice){
            case 1:
                count1++;
                break;
            case 2:
                count2++;
                break;
            case 3:
                count3++;
                break;
            case 4:
                count4++;
                break;
            case 5:
                count5++;
                break;
            case 6:
                count6++;
                break;
        }
    }
    printf("1:%d\n",count1);
    printf("2:%d\n",count2);
    printf("3:%d\n",count3);
    printf("4:%d\n",count4);
    printf("5:%d\n",count5);
    printf("6:%d\n",count6);
    return 0;
}*/
int main(){
    srand(time(0));
    int count[6] = {0};
    int i, j;
    for(i = 1; i <= 6000; i++){
        int dice;
        dice = rand() % 6 + 1;
        /*
        for(j = 1;j <= 6; j++){
            if(dice == j){
                count[j-1]++;
            }
        }
        for�j��|�]�����A�d��O1~6�A�p�Gdice == j�A
        count[j - 1]�N��count[dice - 1]�O�ۦP���A�]��dice == j
        �ҥH�ڭ̥i�H�ٲ�for�j���if�P�_���C
        */
        count[dice-1]++;
    }
    for(j = 1;j <= 6; j++){
        printf("%d:%d\n", j,    count[j-1]);
    }
    return 0;
}
