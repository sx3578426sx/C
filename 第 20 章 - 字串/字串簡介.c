#include <stdio.h>
//%c是指一個字元，%s是指一個字串。

void charStr(char str[]){
    int i;
    for(i = 0; str[i] != '\0'; i++){
        printf("%c",str[i]);
    }
    printf("\n");
}

int main(){
    //字元陣列可以用''分別包住每個字，也可以用""包住全部的字串。
    //在執行函式時，設定'\0'，當作終止迴圈的值。
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char a[] = "Hello";
    charStr(str);
    printf("%s\n", a);
}
