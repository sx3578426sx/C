#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//模擬擲100,000次公正骰子，每次擲兩顆，統計各種點數和出現的次數。

int main(){
    srand(time(0));
    int counter[11] = {0};  //2~12點共有11位
    int dice1=0, dice2=0;
    int sum = 0;
    int i, j;
    for(i = 0; i < 100000; i++){     //骰子擲幾次
        int dice1 = rand() % 6 + 1; //第一顆骰子隨機
        int dice2 = rand() % 6 + 1; //第二顆骰子隨機
        int sum = dice1 + dice2;
        counter[sum - 2]++; //因為兩顆骰子相加的和跟陣列差2
    }
    for(j = 2; j <= 12; j++){
        printf("%d: %d\n", j, counter[j - 2]);
    }

    return 0;
}
