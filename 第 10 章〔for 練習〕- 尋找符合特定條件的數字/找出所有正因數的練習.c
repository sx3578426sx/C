#include <stdio.h>
//0不屬於任何數的因數

int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i;
    for(i = 1; i <= N; i++){
        if(N % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
