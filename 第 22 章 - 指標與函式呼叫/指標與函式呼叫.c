#include <stdio.h>

void addone(int n){
    n = n + 1;
}

void addtwo(int *n){
    *n = *n + 1;
}

int main(){
    int a = 3;
    addone(a);
    printf("%d\n", a);
    //���G��3�A�]��a�ƻs�Ȩ�禡�A�ä��|���ܭ�

    int *b = 3;
    addtwo(&b);
    printf("%d\n", b);
    //���G��4�A�]��b�ƻs��}��禡�A�|���ܭ�

    return 0;
}
