#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�H������10�ӼƦr�A�o10�ӼƦr�O�q1~10�����A�B���S������

int main(){
    //�H������10�ӼƦr
    /*���]�@���üơA�ó]�w�}��(0)�A�N�o�쪺�H���Ƹ򤧫e����A
    �p�G�����ơA�h�N�}�����}(1)�A����for�j��A���s�]�@���üơA
    �J��ۦP�Ȫ��ɭ�break�Ψӵ����̪�for�j��*/
    int i, j, isUse, n[10]={0};
    for(i = 0; i < 10; i++){
        do{
            n[i] = rand() % 10 + 1;
            isUse = 0;
                for(j = 0; j < i; j++){
                    if(n[i] == n[j]){
                        isUse = 1;
                        break;
                    }
                }
        }while(isUse == 1);
        printf("%d\n",n[i]);
    }
    return 0;
}

