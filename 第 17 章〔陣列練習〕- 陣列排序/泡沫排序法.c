#include <stdio.h>
//�ϥΪ̿�J5�Ӿ�ơA�ϥΪw�j�ƧǪk�A�N���Ӿ�ƥѤp��j�Ƨ�
int main(){
    int i, j, t, v[5];
    printf("�п�J5�Ӿ��:\n");
    for(i = 1; i <= 5; i++){
        scanf("%d", &v[i-1]);
    }

    /*�]���Ʀr�����ӡA�u�ݭn�|���A�N�i�H�Ƨ�
    ��Ĥ@���]���A�̫�@�ӼƦr�N���Τ���F�A�H������*/
    for(i = 0; i < 4; i++){
        for(j = 0; j <= 4 - i; j++){
            if(v[j] > v[j+1]){
                t = v[j];
                v[j] = v[j+1];
                v[j+1] = t;
            }
        }
    }

    for(i = 0; i < 5; i++){
        printf("%d\n", v[i]);
    }
    return 0;
}
