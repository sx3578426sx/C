#include <stdio.h>
//將a跟b由大到小排序

void sort(int *, int *);     //當b比a大的時候，呼叫swap函式交換a跟b的值
void swap(int *, int *);    //交換a跟b的值

int main(){
    int a, b;
    printf("請輸入兩個整數:\n");
    scanf("%d %d", &a, &b);
    sort(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}

void sort(int *a, int *b){
    if(*b > *a){
        swap(a, b);
        //本來是swap(&*a,&*b)，但是當&*相鄰的時候可以抵消。
    }
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
