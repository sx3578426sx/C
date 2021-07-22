#include <stdio.h>
//使用函式複製位址，將a跟b的值做交換。

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
