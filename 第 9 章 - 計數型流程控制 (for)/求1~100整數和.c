#include <stdio.h>
//�ϥΪ̿�J�����N�ȡA�D1�[��N���s���ƩM�C
int main(){
    int sum;
    int num1, num2;
    printf("N = ");
    scanf("%d", num2);
    for(num1 = 0; num1 <= num2; num++){
        sum += num1;
    }
    printf("%d", sum);
}
