#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�H������10�ӼƦr�A�o10�ӼƦr�O�q1~10�����A�B���S������

int main(){
    int i, j, isUse, n[10]={0};
    srand(time(0));
    for(i = 1; i <= 10; i++){
        do{
            n[i-1] = rand() % 10 + 1;
            /*���]�@���üơA�ó]�w�}��(0)�A�N�o�쪺�H���Ƹ򤧫e����A
            �p�G�����ơA�h�N�}�����}(1)�A��ܦ����ơA
            ����for�j��A���s�]�@���ü�*/
            isUse = 0;
            for(j = 1; j < i; j++){
                if(n[i-1] == n[j-1]){
                    isUse = 1;
                    break;
                    //�o�䪺break�Ψӵ����̪�for�j��
                }
            }
        }while(isUse == 1);
            printf("%d\n", n[i-1]);
    }
    return 0;
}
