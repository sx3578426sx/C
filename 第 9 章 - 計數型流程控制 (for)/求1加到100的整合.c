#include <stdio.h>
//算出1~100整數和。
int main(){
    int a;
    int sum = 0;
    for(a = 0; a <= 100; a++){
        sum = sum + a;
    }
    printf("%d", sum);
}
