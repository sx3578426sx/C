#include <stdio.h>

int f(int);

int main(){
    printf("%d\n", f(0));
}

int f(int i){
    if(i == 2){ //�o��n������A�קK���J�����L�a�j��
        return i;
    }
    return f(i+1);
}
/*
���涶�ǬO main������f(0)�A�i��f�禡
�Ĥ@��f(i = 0) �ܦ� f(i+1) = 0 +1 = 1
�ĤG��f(i = 1) �ܦ� f(i+1) = 1 + 1 = 2
�ĤT��f(i = 2) �]���ŦX i == 2�A�ҥH�^�� i
�ĤT���o�쪺 f(i = 2) �ȡA�^�ǵ��ĤG����  f(i = 2)�A
�ĤG�������G�^�ǵ��Ĥ@���A�̫�^�Ǩ�main�A
�ҥH�^�Ǫ����G��2
*/
