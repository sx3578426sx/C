#include <stdio.h>
/*
讓使用者輸入5個整數後，可以依照輸入的順序號碼查詢所輸入的整數。
(查詢順序號碼為0時則結束)
*/

int main(){
    int i; //第幾次輸入
    int Q[5] = {0}; //每次輸入值的存放欄位
    int j, k, N;

    for(i = 1; i <= 5;i++){
        printf("%d:",i);
        scanf("%d", &N);
        Q[i - 1] = N;   //因陣列從第0位開始，故要-1
    }

    /*
    當查詢號碼為0時就"結束查詢"
    如果查詢1~5 則印出Q陣列相對印的查詢值，
    否則印出"超出查詢範圍!"*/
    while(1){
        printf("Q: ");
        scanf("%d",&j);
        if(j == 0){
            printf("結束查詢。\n");
            break;
        }
        else if(j >= 1 && j < i){
            printf("%d\n", Q[j - 1]);
        }
        else{
            printf("超出查詢範圍!\n");
        }
    }
    return 0;
}

