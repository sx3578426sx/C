#include <stdio.h>
//1:90, 2:75, 3:83, 4:89, 5:71
int main(){
    int price[5] = {90, 75, 83, 89, 71};
    int total = 0;
    int id;

    do{
        scanf("%d", &id);
        if(id <= 5){    //���b�קK�Ʀr�W�L�}�C���d��
            total += price[id - 1];
        }
    } while(id != 0);   //�Y��J0�h���X�j��
    printf("Total:%d\n", total);
    /*
    �]�i�H�o�˼g�A���S�����b�A�Y�W�L�}�C���d��A�`�B�|�ܱo�ܩ_�ǡC
    while(1){ //1���true�A�N�|�i�J�L�a�j��A����id=0�N�j���
        scanf("%d", &id);
        if(id == 0){
            break;
        }
        total += price[id - 1];
    */
}
