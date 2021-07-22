#include <stdio.h>

double div2(double x){
    return x / 2;
}

int main(){
    int foo = 2;
    printf("%f", div2(foo + 2));
    //函式呼叫會先算()裡面的值，然後才去執行函式，foo+2=4
    /*
    算完()的值會複製值到函式，當資料型別跟函式不同時，
    就會強制轉型，如果不能轉型就會報錯，
    所以這邊會將4改成4.0，然後執行div2的函式，4.0 / 2 = 2.0
    */
}
