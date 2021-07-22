#include <stdio.h>

/*
printf("*\n");               //1琍琍                                          + 传︽
printf("**\n");             //1琍琍 + i フ + 1琍琍 + 传︽ (i = 0)
printf("*  *\n");           //1琍琍 + i フ + 1琍琍 + 传︽ (i = 1)
printf("*    *\n");         //1琍琍 + i フ + 1琍琍 + 传︽ (i = 2)
printf("*****\n");      //1琍琍 + 3 琍琍 + 1琍琍 + 传︽
眖瓃眔い丁摸┮糶癹伴
*/
int main(){
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    printf("*\n");
    for(i = 0; i <= N-3; i++){ //Ι奔材材︽程︽┮琌N-3
        printf("*");
        for(j = 1;  j <= i; j++){ // i フ
            printf(" ");
        }
        printf("*\n");
    }
    for(i = 1; i <= N; i++){
        printf("*");
    }
}
