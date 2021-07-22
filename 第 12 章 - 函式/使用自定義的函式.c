#include <stdio.h>
//在C語言中，皆由 main 開始執行

/*
可用數學理解
f(x) = x + 3
f(4) = 4 + 3
自定義函式int f(int x){執行程式碼}
第一個 int 表示回傳值的型態
第二個 int 表示帶入值的型態
*/

//要在main之前定義涵式，main才呼叫的到
int f(int x){
    return x + 3;
}

int main(){
    printf("%d\n", f(4));
}

/*
若在main之後定義函式，就要在main之前先宣告函式，如下：

//這邊要先宣告，程式由上而下執行時，main才能呼叫到
int f(int x); 宣告可將名稱省略，等定義時在命名，所以這邊 x 可以先不打

int main(){
    printf("%d\n", f(4));
}

int f(int x){
    return x + 3;
}
*/
