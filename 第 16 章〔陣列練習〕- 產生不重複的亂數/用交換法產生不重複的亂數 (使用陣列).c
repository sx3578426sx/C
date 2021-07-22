#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//隨機產生10個數字，這10個數字是從1~10之間，且都沒有重複

int main(){
    /*利用交換法，先將按順序印出1~10，
    即n[0] = 1, n[1] = 2... n[9] = 10。
    而後將第一個亂數，跟n[0]做交換，第二個跟n[1]做交換，以此類推*/
    srand(time(0));
    int i, j, n[10]={0};
    //先存放好1~10
    for(i = 1; i <= 10; i++){
        n[i-1] = i;
    }
     for(i = 1; i <= 10; i++){
        for(j = 1; j <= 10; j++){
            j = rand() % (11-i) + i;
            int t = n[i-1];
            n[i-1] = j;
            j = t;
            printf("%d\n",n[i-1]);
        }
     }
    return 0;
}
