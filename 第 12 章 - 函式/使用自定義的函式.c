#include <stdio.h>
//�bC�y�����A�ҥ� main �}�l����

/*
�i�μƾǲz��
f(x) = x + 3
f(4) = 4 + 3
�۩w�q�禡int f(int x){����{���X}
�Ĥ@�� int ��ܦ^�ǭȪ����A
�ĤG�� int ��ܱa�J�Ȫ����A
*/

//�n�bmain���e�w�q�[���Amain�~�I�s����
int f(int x){
    return x + 3;
}

int main(){
    printf("%d\n", f(4));
}

/*
�Y�bmain����w�q�禡�A�N�n�bmain���e���ŧi�禡�A�p�U�G

//�o��n���ŧi�A�{���ѤW�ӤU����ɡAmain�~��I�s��
int f(int x); �ŧi�i�N�W�٬ٲ��A���w�q�ɦb�R�W�A�ҥH�o�� x �i�H������

int main(){
    printf("%d\n", f(4));
}

int f(int x){
    return x + 3;
}
*/
