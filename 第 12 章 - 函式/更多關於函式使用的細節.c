#include <stdio.h>

double div2(double x){
    return x / 2;
}

int main(){
    int foo = 2;
    printf("%f", div2(foo + 2));
    //�禡�I�s�|����()�̭����ȡA�M��~�h����禡�Afoo+2=4
    /*
    �⧹()���ȷ|�ƻs�Ȩ�禡�A���ƫ��O��禡���P�ɡA
    �N�|�j���૬�A�p�G�����૬�N�|�����A
    �ҥH�o��|�N4�令4.0�A�M�����div2���禡�A4.0 / 2 = 2.0
    */
}
