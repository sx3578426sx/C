#include <stdio.h>
/*
    當使用者輸入的資料不符合設定的型態，則顯示輸入錯誤。
    例如int，使用者只能輸入整數，但是輸入了abc。
    如果scanf(收到的回傳值是0表示使用者輸入非整數型態的字元)
    可用下列兩行程式碼測試
    scanf("%d", &num);
    printf("%d", num);
    */
int main(){
    int num;
    if(scanf("%d", &num) == 1){
        printf("%d\n", num);
    }
    else{
        printf("錯誤:只能輸入整數。\n");
    }
    return 0;
}
