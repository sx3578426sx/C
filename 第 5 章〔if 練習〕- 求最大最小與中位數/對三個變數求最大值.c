//��J�T�Ӿ�ơA��X�T�Ӥ����̤j��
#include <stdio.h>

int main(){
    int a, b, c, max;
    printf("Please enter three integer: ");
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if(b > a){
        max = b;
    }
    if(c > a){
        max = c;
    }
    printf("The maxinum is %d .", max);
}
