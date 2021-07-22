#include <stdio.h>
//找出1~1000間內所有韓信點兵的答案前三個小的數字

int main(){
    int i;
    int count = 0;
    for(i = 1; i <= 1000; i++){
        if(i % 3 == 2 && i % 5 ==3 && i %7 == 2){
            printf("%d ", i);
            count++;
            if(count == 3){
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
