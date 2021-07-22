#include <stdio.h>
//使用者連續輸入正整數直到使用者輸入0為止
//計算出所有輸入的正整數和
int main(){
    int num;
    int sum = 0;
    printf("Please enter the number (quit:0)\n");
    while(sum == 0 || num != 0){
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("The sum is %d .", sum);
    return 0;
}
