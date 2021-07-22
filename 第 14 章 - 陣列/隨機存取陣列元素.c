#include <stdio.h>
//1:90, 2:75, 3:83, 4:89, 5:71
int main(){
    int price[5] = {90, 75, 83, 89, 71};
    int total = 0;
    int id;

    do{
        scanf("%d", &id);
        if(id <= 5){    //防呆避免數字超過陣列的範圍
            total += price[id - 1];
        }
    } while(id != 0);   //若輸入0則跳出迴圈
    printf("Total:%d\n", total);
    /*
    也可以這樣寫，但沒有防呆，若超過陣列的範圍，總額會變得很奇怪。
    while(1){ //1表示true，將會進入無窮迴圈，直到id=0就強制結束
        scanf("%d", &id);
        if(id == 0){
            break;
        }
        total += price[id - 1];
    */
}
