#include <stdio.h>
//�ϥΪ̿�JMAX�A�L�X1~MAX���A
//�i�H��3�l2�B��5�l3�B��7�l2���̤j���Ʀr

/*int main(){
    int i, j, max;
    printf("MAX = ");
    scanf("%d", &max);
    for(i = 0; i <= max; ++i){
        if(i%3 == 2 && i%5 == 3 && i%7 == 2){
            j = i;
        }
    }
    printf("%d ", j);
    return 0;
}*/

//�[�J����ư��� (break �P continue �z�y)
//break; �ΨӤ��_�ثe���ݪ����ư���z�y
//continue; �b���ư���z�y�����L�᭱���{���϶�
int main(){
    int i, max;
    printf("MAX = ");
    scanf("%d", &max);
    for(i = max; i >= 0; --i){
        if(i%3 == 2 && i%5 == 3 && i%7 == 2){
            break;
        }
    }
    printf("%d ", i);
    return 0;
}
