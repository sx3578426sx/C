#include <stdio.h>
//�ϥΪ̿�JN1��N2�A�L�XN1~N2���ǦC�C
int main(){
    int num1, num2, t;
    printf("N1:");
    scanf("%d", &num1);
    printf("N2:");
    scanf("%d", &num2);
    if(num2 < num1){
        t = num1;
        num1 = num2;
        num2 = t;
    }
    while(num1 <= num2){
        printf("%d\n", num1);
        num1 = num1 +1;
    }
    return 0;
}
