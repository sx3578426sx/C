#include <stdio.h>
//�z�L�禡�A�D���P�}�C�̤j�ȡC

int maxv(int [], int);
int main(){
    int i;
    int a[3] = {2, 7, 3};
    int b[5] = {3,1, 6, 9, 0};
    printf("%d\n", maxv(a, 3));
    printf("%d\n", maxv(b, 5));
}

/*
�쥻a[3]��b[5]�n�g��Ө禡�A�̭����ѼƤ��O��v[3]��v[5]�A
���o�䦳�ӯS���ޥ��Aint v[]�i���ϥΪŰ}�C�A
�o�˷�J�쪺�}�C���פ��P�ɡA�N�i�H�u�Τ@�Ө禡�@�~�A
���L�S�O�`�N�쪺�O�Gint v[N] �o�ؼg�k�O���X�k���A�ҥH�t�~�]�w�@�ӰѼ�N
�ҥH�o�Ө禡���Ĥ@�ӰѼƬ��}�C�A�N��O�έ��Ӱ}�C�A�ĤG�ӰѼ�N�h�O�N���X��
*/
int maxv(int v[], int N){
    int max = v[0], i;
    for(i = 0; i < N; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}

/*���Q�G
1.��ưѼƤ@�w�n�]�wN��?Ans:���@�w
2.�Yv[i]���s�b�|��ˡA���]a[3]�A
�ΤFmaxv(a,4)�A���W�L���ĥ|��A�|�o�ͬƻ���D*/
