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
    //�u�L�X�_��
    for(num1; num1 <= num2; num1++){
        if(num1 % 2 == 1){
            printf("%d\n", num1);
        }
    }

    /*
    1.�̧ǻ��W
    for(num1; num1 <= num2; num1++){
        printf("%d\n", num1);
    }

    2.�˧ǻ���
    for(num1; num1 <= num2; num2--){
        printf("%d\n", num2);
    }

    3.�u�L�X����
    for(num1; num1 <= num2; num1++){
        if(num1 % 2 == 0){
            printf("%d\n", num1);
        }
    }
    */
    return 0;
}
