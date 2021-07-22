#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//隨機產生10個數字，這10個數字是從1~10之間，且都沒有重複

int main(){
    //隨機產生10個數字
    /*先跑一次亂數，並設定開關(0)，將得到的隨機數跟之前的比，
    如果有重複，則將開關打開(1)，結束for迴圈，重新跑一次亂數，
    遇到相同值的時候break用來結束最近的for迴圈*/
    int i, j, isUse, n[10]={0};
    for(i = 0; i < 10; i++){
        do{
            n[i] = rand() % 10 + 1;
            isUse = 0;
                for(j = 0; j < i; j++){
                    if(n[i] == n[j]){
                        isUse = 1;
                        break;
                    }
                }
        }while(isUse == 1);
        printf("%d\n",n[i]);
    }
    return 0;
}

