#include <stdio.h>
//��X1~100��ƩM�C
int main(){
    int a;
    int sum = 0;
    for(a = 0; a <= 100; a++){
        sum = sum + a;
    }
    printf("%d", sum);
}
