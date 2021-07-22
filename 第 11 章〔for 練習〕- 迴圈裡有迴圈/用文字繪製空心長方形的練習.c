#include <stdio.h>

int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);

    //印第一行，印完後換行
    for(i = 1; i <= N; i++){
        printf("*");
    }
    printf("\n");

    /*
    第二行先印一個"*"，然後中間印空白，
    所以要扣掉第一行跟最後一行，
    還有每行頭尾的"*"，就是N-2
    */
    for(i = 1; i <= N-2; i++){      //這邊是扣掉第一行到最後一行
        printf("*");
        for(j = 1; j <= N-2; j++){  //這邊是扣掉每行頭尾
            printf(" ");
        }
        printf("*\n");                  //這邊是每行的尾"*"，印完就換行
    }

    //印最後一行
    for(j = 1; j <= N; j++){
        printf("*");
    }
    return 0;
}
