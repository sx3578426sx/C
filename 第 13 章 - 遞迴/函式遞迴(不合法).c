#include <stdio.h>

void f(void);

int main(){
    f();
    return 0;
}

/*�b�禡�w�q�̩I�s��ҩw�q���禡�٬����j�A
    ���O�o��|���J�����L�a�j��A�ҥH�o�ؼg�k���X�k*/
void f(void){
    f();
}
