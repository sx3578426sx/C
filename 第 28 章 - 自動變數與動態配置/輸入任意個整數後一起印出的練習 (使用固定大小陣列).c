#include <stdio.h>
#include <string.h>
/*��J���N�Ӿ�ƫ�A���J0������J�A�L�X0���e�Ҧ��Ʀr�F
�άO��ϥΪ̿�J10�ӼƦr��A�N�L�X�Ҧ��Ʀr*/

int main(){
    int number[10];
    int length = 0;
    while(length < 10){
        int input;
        scanf("%d", &input);
        if(input == 0){
            break;
        }
        number[length] = input;
        length++;
    }
    printf("Number: ");
    int i;
    for(i = 0; i < length; i++){
        printf("%d ", number[i]);
    }
    printf("\n");
    return 0;
}
