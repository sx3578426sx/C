#include <stdio.h>
//�ϥΪ̿�JMAX�A�L�X1~MAX���A
//�i�H��3�l2�B��5�l3�B��7�l2���Ʀr

int main(){
    int i, max;
    printf("MAX = ");
    scanf("%d", &max);
    for(i = 0; i <= max; i++){
        if(i%3 == 2 && i%5 == 3 && i%7 == 2){
            printf("%d ", i);
        }
    }
    return 0;
}
