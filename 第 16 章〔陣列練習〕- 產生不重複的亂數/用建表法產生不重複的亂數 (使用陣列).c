#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�H������10�ӼƦr�A�o10�ӼƦr�O�q1~10�����A�B���S������

int main(){
    /*�Q�έp�ƾ��A�h�ϦV��ҡA���ǼƦr�X�{�L�A
    �]�w�p�ƾ�1~10�����Ƭ�0�A���X�{�L�N+1�A���Ƭ�1���ɭԡA
    �N���s�]�@�Ӷü�*/
    srand(time(0));
    int i, n, counter[10]={0};
    for(i = 1; i <= 10; i++){
        do{
            n = rand() % 10 +1;
        }while(counter[n-1] != 0);
        printf("%d\n", n);
        counter[n-1]++;
    }
    return 0;
}
