#include <stdio.h>

void f(void);

int main(){
    f();
    return 0;
}

/*在函式定義裡呼叫到所定義的函式稱為遞迴，
    但是這邊會陷入類似無窮迴圈，所以這種寫法不合法*/
void f(void){
    f();
}
