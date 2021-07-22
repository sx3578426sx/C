#include <stdio.h>

int main(){
    char ch = 'A';
    printf("%c\n", ch + 32);

    //練習:字元的大小寫轉換
    //todo:如果使用者輸入A，則輸出a
    //todo:如果使用者輸入B，則輸出b
    //todo:如果使用者輸入Z，則輸出z
    char ch2;
    printf("Please enter char: ");
    scanf("%c", &ch2);
    printf("%c", ch2 + 32);
    return 0;
}
