#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�H������10�ӼƦr�A�o10�ӼƦr�O�q1~10�����A�B���S������

int main(){
    /*�Q�Υ洫�k�A���N�����ǦL�X1~10�A
    �Yn[0] = 1, n[1] = 2... n[9] = 10�C
    �ӫ�N�Ĥ@�ӶüơA��n[0]���洫�A�ĤG�Ӹ�n[1]���洫�A�H������*/
    srand(time(0));
    int i, j, n[10]={0};
    //���s��n1~10
    for(i = 1; i <= 10; i++){
        n[i-1] = i;
    }
     for(i = 1; i <= 10; i++){
        for(j = 1; j <= 10; j++){
            j = rand() % (11-i) + i;
            int t = n[i-1];
            n[i-1] = j;
            j = t;
            printf("%d\n",n[i-1]);
        }
     }
    return 0;
}
