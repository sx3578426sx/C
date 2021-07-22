#include <stdio.h>
/*
已知兩正整數相加為30，相乘為221。求此兩個整數為?
*/

int main(){
   int i, j;
   for(i = 1; i <= 30; i++) {
        for(j = 1; j <= 30; j++){
            if(i + j == 30 && i * j == 221 && i <= j){ //限制不要印重複的數字，用i <= j
                printf("i = %d, j = %d\n", i, j);
            }
        }
   }
   /*
   第二種作法，限制不要重複
   int i, j;
   for(i = 1; i <= 30/2; i++) {         // 可將 i 設為1~15
        for(j = 30/2; j <= 30; j++){  // j 設為15~30
            if(i + j == 30 && i * j == 221){
                printf("i = %d, j = %d\n", i, j);
            }
        }
   }

   只用一個for迴圈，利用i跟j已知相加為30的關係
   int i;
   for(i = 1; i <= 30/2; i++) {
        int j = 30 - i;
        if(i * j == 221){
            printf("i = %d, j = %d\n", i, j);
        }
   }
   */
   return 0;
}
