//輸入三個整數，輸出三個中的最小值
#include <stdio.h>

int main(){
    int a, b, c, min;
    printf("Please enter three integer: ");
    scanf("%d%d%d", &a, &b, &c);
    min = a;
    if(b > a){
        min = b;
    }
    if(c > a){
        min = c;
    }
    printf("The maxinum is %d .", min);
}
