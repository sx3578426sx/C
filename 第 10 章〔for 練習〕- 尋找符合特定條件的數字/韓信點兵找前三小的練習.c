#include <stdio.h>
//��X1~1000�����Ҧ����H�I�L�����׫e�T�Ӥp���Ʀr

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
