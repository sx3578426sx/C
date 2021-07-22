#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//rand是呼叫stdlib中的函式 int rand(void);回傳一個隨機整數
//time是時間

int main(){
    srand(time(0));
    /*避免同時間執行出現重複數字，加入time
    srand為亂數種子，可用來清空rand。
    time會回傳一個整數型別*/
    int i;
    for(i = 1; i <= 5; i++){
        printf("%d", rand()); //若前面沒有srand，rand出現的結果將會相同
        printf("\n");
    }
    return 0;
}
