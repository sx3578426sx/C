#include <stdio.h>

int main(){
    //    �ήy�Ф覡���T����
    /*

    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if(i == N || j == N || i > j){
                printf("*");
            }
        }
        printf("\n");
    }
    */
    /*
    ���]�n�L
    *
    **
    ***
    printf("*\n");
    printf("**\n");
    printf("***\n");
    �q���o�����ƪ��A���]*��i�A�i���H3���Ҥl
*/
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){        // i = 1, 2, 3
        printf("*");
        for(j = 1; j < i; j++){       // �L i �ӬP�P
            printf("*");
        }
        printf("\n");
    }
}
