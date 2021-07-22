#include <stdio.h>
//使用者輸入N1跟N2，印出N1~N2的序列。
int main(){
    int num1, num2, t;
    printf("N1:");
    scanf("%d", &num1);
    printf("N2:");
    scanf("%d", &num2);
    if(num2 < num1){
        t = num1;
        num1 = num2;
        num2 = t;
    }
    //只印出奇數
    for(num1; num1 <= num2; num1++){
        if(num1 % 2 == 1){
            printf("%d\n", num1);
        }
    }

    /*
    1.依序遞增
    for(num1; num1 <= num2; num1++){
        printf("%d\n", num1);
    }

    2.倒序遞減
    for(num1; num1 <= num2; num2--){
        printf("%d\n", num2);
    }

    3.只印出偶數
    for(num1; num1 <= num2; num1++){
        if(num1 % 2 == 0){
            printf("%d\n", num1);
        }
    }
    */
    return 0;
}
