#include <stdio.h>
/*
讓使用者輸入10個整數後，輸入要查詢的範圍後，
顯示輸入整數中有被包含在內的整數。
(輸入00則結束)
*/

int main(){
    int i[10] = {0};
    int j;
    printf("請輸入10個整數:\n");
    for(j = 1; j <= 10; j++){
        scanf("%d", &i[j-1]);
    }

    /*使用者輸入上限與下限，印出範圍內的數字*/
    while(1){
        int N1, N2;
        printf("請輸入範圍(上限/下限): ");
        scanf("%d %d", &N1, &N2);
        if(N1 == 0 && N2 == 0){     //如果使用者輸入 0 0 則結束
            break;
        }

        printf("Ans: ");
        for(j = 1; j <= 10; j++){
            //防呆，避免使用者先輸入下限再輸入上限
            if(i[j-1] >= N1 && i[j-1]<= N2 || i[j-1] >= N2 && i[j-1]<= N1){
                printf("%d ", i[j-1]);
            }
        }
        printf("\n");

    }
    return 0;
}
