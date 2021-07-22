#include <stdio.h>
//使用者輸入MAX，印出1~MAX中，
//可以除3餘2且除5餘3且除7餘2的最大的數字

/*int main(){
    int i, j, max;
    printf("MAX = ");
    scanf("%d", &max);
    for(i = 0; i <= max; ++i){
        if(i%3 == 2 && i%5 == 3 && i%7 == 2){
            j = i;
        }
    }
    printf("%d ", j);
    return 0;
}*/

//加入中止重複執行 (break 與 continue 述句)
//break; 用來中斷目前所屬的重複執行述句
//continue; 在重複執行述句中跳過後面的程式區塊
int main(){
    int i, max;
    printf("MAX = ");
    scanf("%d", &max);
    for(i = max; i >= 0; --i){
        if(i%3 == 2 && i%5 == 3 && i%7 == 2){
            break;
        }
    }
    printf("%d ", i);
    return 0;
}
