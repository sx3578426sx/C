#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//擲六千次的骰子，求1~6出現了幾次
/*將下方原本寫的很長的程式，用陣列的方式改寫
int main(){
    int count1 = 0, count2 = 0, count3 = 0;
    int count4 = 0, count5 = 0, count6 = 0;
    srand(time(0));
    int i;
    for(i = 0; i <= 6000; i++){
        int dice;
        dice = rand() % 6 + 1;
        switch(dice){
            case 1:
                count1++;
                break;
            case 2:
                count2++;
                break;
            case 3:
                count3++;
                break;
            case 4:
                count4++;
                break;
            case 5:
                count5++;
                break;
            case 6:
                count6++;
                break;
        }
    }
    printf("1:%d\n",count1);
    printf("2:%d\n",count2);
    printf("3:%d\n",count3);
    printf("4:%d\n",count4);
    printf("5:%d\n",count5);
    printf("6:%d\n",count6);
    return 0;
}*/
int main(){
    srand(time(0));
    int count[6] = {0};
    int i, j;
    for(i = 1; i <= 6000; i++){
        int dice;
        dice = rand() % 6 + 1;
        /*
        for(j = 1;j <= 6; j++){
            if(dice == j){
                count[j-1]++;
            }
        }
        for迴圈會跑六次，範圍是1~6，如果dice == j，
        count[j - 1]就跟count[dice - 1]是相同的，因為dice == j
        所以我們可以省略for迴圈跟if判斷式。
        */
        count[dice-1]++;
    }
    for(j = 1;j <= 6; j++){
        printf("%d:%d\n", j,    count[j-1]);
    }
    return 0;
}
