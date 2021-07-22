#include <stdio.h>
//使用者輸入MAX，印出1~MAX中，
//可以除3餘2且除5餘3且除7餘2的數字

int main(){
    int i, max;
    printf("MAX = ");
    scanf("%d", &max);
    for(i = 0; i <= max; i++){
        if(i%3 == 2 && i%5 == 3 && i%7 == 2){
            printf("%d ", i);
        }
    }
    return 0;
}
