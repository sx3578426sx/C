#include <stdio.h>
//�ϥΪ̳s���J����ƪ���ϥΪ̿�J0����
//�p��X�Ҧ���J������ƥ���(���]�A0)
int main(){
    int num;
    int count = 0;
    int sum = 0;
    float avg;
    printf("Please enter the number (quit:0)\n");
    scanf("%d", &num);
    if(num == 0){
        printf("The avg is N/A");
        return 0;
    }
    while(num != 0){
        sum = sum + num;
        scanf("%d", &num);
        count = count + 1;
    }
    avg =  (float)sum / (count - 1);
    printf("The avg is %f .", avg);
    return 0;
}
