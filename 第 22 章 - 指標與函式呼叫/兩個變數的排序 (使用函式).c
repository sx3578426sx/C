#include <stdio.h>
//�Na��b�Ѥj��p�Ƨ�

void sort(int *, int *);     //��b��a�j���ɭԡA�I�sswap�禡�洫a��b����
void swap(int *, int *);    //�洫a��b����

int main(){
    int a, b;
    printf("�п�J��Ӿ��:\n");
    scanf("%d %d", &a, &b);
    sort(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}

void sort(int *a, int *b){
    if(*b > *a){
        swap(a, b);
        //���ӬOswap(&*a,&*b)�A���O��&*�۾F���ɭԥi�H����C
    }
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
