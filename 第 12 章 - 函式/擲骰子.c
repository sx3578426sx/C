#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�L�X������������l

int main(){
    srand(time(0)); //�T�O�C�������X���ƦC���P
    int i;
    for(i = 1; i <= 5; i++){
        int dice = rand() % 6 + 1;
        //���l�ơA�]���Ʀr�q0�}�l�A�ҥH�l�ƭn�[1
        printf("%d\n",dice);
    }
        /*
        ���F��rand()�Ʀr�u����1~6�A�bfor�j����]�@���H����
        ���H���� < 1 �Ϊ� > 6 �N�A�]�@���H����
        ���I�Orand���Ʀr�V�j�A���Ʀ��ƶV�h
        do{
            dice = rand();
        }  while (dice < 1 || dice > 6);
        printf("%d\n", dice);
        */
    return 0;
}
