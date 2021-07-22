#include <stdio.h>
//印i個星星，void作為回傳值型態時，表示該函式不回傳任何值。
void print_stars(int i);

int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i;
    for(i = 1; i <= N; i++){
        print_stars(i); //呼叫印 i 個星星的函式
        printf("\n");
    }
    return 0;
}

void print_stars(int i){
    int j;
    for(j = 1; j <= i; j++){
        printf("*");
    }
    //return;   因為void不回傳，所以return可以省略。
}
