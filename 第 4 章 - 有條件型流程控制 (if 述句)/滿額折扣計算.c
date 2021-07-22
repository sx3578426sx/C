/*吃到飽餐廳1人300元，每桌滿3000元會打八折。
TODO:輸入人數、算出總額、若有滿3000
元，消費金額打八折。*/

#include <stdio.h>

int main(){
    int num, total, original;
    printf("Please enter number of customers: ");
    scanf("%d", &num);
    total = num * 300;
    if(total >= 3000){
        total = total * 0.8;
    }
    printf("Total: %d", total);
}
