/*�Y�칡�\�U1�H300���A�C�ມ3000���|���K��C
TODO:��J�H�ơB��X�`�B�B�Y����3000
���A���O���B���K��C*/

#include <stdio.h>

int main(){
    int num, total, original;
    printf("Please enter number of customers: ");
    scanf("%d", &num);
    total = num * 300;
    if(total >= 3000){
        total = total * 0.8;
    }
    printf("Total: %d", total);
}
