#include <stdio.h>
//�ϥΨ禡�ƻs��}�A�Na��b���Ȱ��洫�C

void swap(int *, int *);

int main(){
    int a = 3;
    int b = 5;
    swap(&a, &b);
    printf("a:%d b:%d\n", a, b);
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
