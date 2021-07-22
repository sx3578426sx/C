#include <stdio.h>

//輸入兩個整數值，輸出兩個中的最大值
int main(){
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);

    max = a;
    if(a < b){
        max = b;
    }
    printf("The maxinum is %d .", max);
    return 0;
}
