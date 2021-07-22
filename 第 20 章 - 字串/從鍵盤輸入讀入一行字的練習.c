#include <stdio.h>

/*
將引數a傳入str[]，使用while 迴圈，scanf使用者可以再未按Enter鍵繼續編輯
當按下Enter鍵後會換行，如果迴圈出現"換行"則結束迴圈
當出現換行時，str[i] = '\0'
*/
void str_read(char str[]){
    int i = 0;
    while(1){
        scanf("%c", &str[i]);
        if(str[i] == '\n'){
            break;
        }
        i++;
    }
    str[i] = '\0';
}

int main(){
    char a[15];
    str_read(a);
    printf("%s\n", a);
}
