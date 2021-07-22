#include <stdio.h>

int f(int);

int main(){
    printf("%d\n", f(0));
}

int f(int i){
    if(i == 2){ //這邊要給條件，避免陷入類似無窮迴圈
        return i;
    }
    return f(i+1);
}
/*
執行順序是 main先執行f(0)，進到f函式
第一次f(i = 0) 變成 f(i+1) = 0 +1 = 1
第二次f(i = 1) 變成 f(i+1) = 1 + 1 = 2
第三次f(i = 2) 因為符合 i == 2，所以回傳 i
第三次得到的 f(i = 2) 值，回傳給第二次的  f(i = 2)，
第二次的結果回傳給第一次，最後回傳到main，
所以回傳的結果為2
*/
