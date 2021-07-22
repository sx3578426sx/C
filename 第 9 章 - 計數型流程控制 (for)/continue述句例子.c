#include <stdio.h>
//在重複執行述句中跳過後面的程式區塊
int main(){
    int a;
    for(a = 1; a <= 10; a++){
        if(a == 5){
            continue;
        }
        printf("%d\n", a);
    }
    return 0;
}

//上述例子最後會印出1,2,3,4,6,7,8,9,10，跳過5
