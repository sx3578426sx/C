#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//rand�O�I�sstdlib�����禡 int rand(void);�^�Ǥ@���H�����
//time�O�ɶ�

int main(){
    srand(time(0));
    /*�קK�P�ɶ�����X�{���ƼƦr�A�[�Jtime
    srand���üƺؤl�A�i�ΨӲM��rand�C
    time�|�^�Ǥ@�Ӿ�ƫ��O*/
    int i;
    for(i = 1; i <= 5; i++){
        printf("%d", rand()); //�Y�e���S��srand�Arand�X�{�����G�N�|�ۦP
        printf("\n");
    }
    return 0;
}
