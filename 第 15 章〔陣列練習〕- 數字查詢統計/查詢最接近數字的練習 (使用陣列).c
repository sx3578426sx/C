#include <stdio.h>
#include <stdlib.h>//abs函式庫
/*
讓使用者輸入10個整數後，輸入要查詢的數字後，
顯示輸入整數中，最接近此數的一個整數；
若有兩個相同接近的值，則取較小的那個值。
(輸入0則結束)
*/

int main(){
    //使用者輸入10個整數
    int i, f, n[10]={0};
    printf("請輸入10個整數:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &n[i]);
    }

    while(1){
        printf("查詢值: ");
        scanf("%d",&f);
        //如果使用者輸入 0 則結束
        if(f == 0){
            printf("結束查詢。\n");
            break;
        }
        //設定初始值
        //因為初始值是從n[0]開始，所以迴圈從1開始數
        int nearest_n = n[0];
        for(i = 1; i <= 10; i++){
            /*如果比較接近的數字f-n[i]，相差的值比N-nearset_n接近的值小
            或有兩個一樣接近的值，則取比較小的那個值(n[i]<nearest_n)*/
            if(abs(f-n[i]) < abs(f-nearest_n) || (abs(f-n[i]) == abs(f-nearest_n) && n[i] < nearest_n)){
                nearest_n = n[i];
            }
        }
        printf("%d\n", nearest_n);
    }
    return 0;
}
