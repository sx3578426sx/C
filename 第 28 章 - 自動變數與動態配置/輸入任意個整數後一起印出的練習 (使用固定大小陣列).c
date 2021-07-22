#include <stdio.h>
#include <string.h>
/*輸入任意個整數後，當輸入0結束輸入，印出0之前所有數字；
或是當使用者輸入10個數字後，就印出所有數字*/

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
