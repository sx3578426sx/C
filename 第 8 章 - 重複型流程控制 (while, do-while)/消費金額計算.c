#include <stdio.h>
/*試寫一程式讓使用者分別輸入每個商品的編號。
輸入為0時依照售價表進行結算後，顯示賣出的總金額
售價表：
1號90元
2號75元
3號83元
4號89元
5號71元
*/
int main(){
    int num, sum;
    printf("Please enter your number:\n");
    do{
        scanf("%d", &num);
        switch(num){
            case 1:
                sum += 90;
                break;
            case 2:
                sum +=  75;
                break;
            case 3:
                sum +=  83;
                break;
            case 4:
                sum +=  89;
                break;
            case 5:
                sum +=  71;
                break;
        }
    } while(num != 0);
    printf("Total: %d", sum);
    return 0;
}
