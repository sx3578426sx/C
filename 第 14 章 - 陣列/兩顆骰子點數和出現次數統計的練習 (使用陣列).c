#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�����Y100,000��������l�A�C���Y�����A�έp�U���I�ƩM�X�{�����ơC

int main(){
    srand(time(0));
    int counter[11] = {0};  //2~12�I�@��11��
    int dice1=0, dice2=0;
    int sum = 0;
    int i, j;
    for(i = 0; i < 100000; i++){     //��l�Y�X��
        int dice1 = rand() % 6 + 1; //�Ĥ@����l�H��
        int dice2 = rand() % 6 + 1; //�ĤG����l�H��
        int sum = dice1 + dice2;
        counter[sum - 2]++; //�]��������l�ۥ[���M��}�C�t2
    }
    for(j = 2; j <= 12; j++){
        printf("%d: %d\n", j, counter[j - 2]);
    }

    return 0;
}
