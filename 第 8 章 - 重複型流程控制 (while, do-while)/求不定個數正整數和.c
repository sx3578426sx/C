#include <stdio.h>
//�ϥΪ̳s���J����ƪ���ϥΪ̿�J0����
//�p��X�Ҧ���J������ƩM
int main(){
    int num;
    int sum = 0;
    printf("Please enter the number (quit:0)\n");
    while(sum == 0 || num != 0){
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("The sum is %d .", sum);
    return 0;
}
