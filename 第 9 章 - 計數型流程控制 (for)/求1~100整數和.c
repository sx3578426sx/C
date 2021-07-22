#include <stdio.h>
//使用者輸入正整數N值，求1加到N的連續整數和。
int main(){
    int sum;
    int num1, num2;
    printf("N = ");
    scanf("%d", num2);
    for(num1 = 0; num1 <= num2; num++){
        sum += num1;
    }
    printf("%d", sum);
}
