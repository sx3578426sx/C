#include <stdio.h>
//輸入三個整數，輸出他們的中位數
int main(){
    int a, b, c, med;
    printf("Please enter three integer: ");
    scanf("%d%d%d", &a, &b, &c);
    med = a;
    if(a > b && b > c){
        med = b;
    }
    if(a > c && c > b){
        med = c;
    }
    printf("The median is %d .", med);
}
