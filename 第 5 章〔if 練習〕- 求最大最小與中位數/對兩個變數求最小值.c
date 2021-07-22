#include <stdio.h>
//對兩個變數求最小值
int main(){
    int a, b, min;
    printf("Please enter two integer: ");
    scanf("%d%d", &a, &b);
    min = a;

    if(b < a){
        min = b;
    }
    printf("The maxinum is %d .", min);
    return 0;
}
