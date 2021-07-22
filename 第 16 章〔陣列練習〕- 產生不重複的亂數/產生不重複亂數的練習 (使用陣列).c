#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//隨機產生10個數字，這10個數字是從1~10之間，且都沒有重複

int main(){
    int i, j, isUse, n[10]={0};
    srand(time(0));
    for(i = 1; i <= 10; i++){
        do{
            n[i-1] = rand() % 10 + 1;
            /*先跑一次亂數，並設定開關(0)，將得到的隨機數跟之前的比，
            如果有重複，則將開關打開(1)，表示有重複，
            結束for迴圈，重新跑一次亂數*/
            isUse = 0;
            for(j = 1; j < i; j++){
                if(n[i-1] == n[j-1]){
                    isUse = 1;
                    break;
                    //這邊的break用來結束最近的for迴圈
                }
            }
        }while(isUse == 1);
            printf("%d\n", n[i-1]);
    }
    return 0;
}
