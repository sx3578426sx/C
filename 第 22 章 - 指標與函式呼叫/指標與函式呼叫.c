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
    //結果為3，因為a複製值到函式，並不會改變值

    int *b = 3;
    addtwo(&b);
    printf("%d\n", b);
    //結果為4，因為b複製位址到函式，會改變值

    return 0;
}
