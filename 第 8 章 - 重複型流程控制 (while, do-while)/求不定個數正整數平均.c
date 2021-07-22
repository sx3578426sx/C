#include <stdio.h>
//使用者連續輸入正整數直到使用者輸入0為止
//計算出所有輸入的正整數平均(不包括0)
int main(){
    int num;
    int count = 0;
    int sum = 0;
    float avg;
    printf("Please enter the number (quit:0)\n");
    scanf("%d", &num);
    if(num == 0){
        printf("The avg is N/A");
        return 0;
    }
    while(num != 0){
        sum = sum + num;
        scanf("%d", &num);
        count = count + 1;
    }
    avg =  (float)sum / (count - 1);
    printf("The avg is %f .", avg);
    return 0;
}
