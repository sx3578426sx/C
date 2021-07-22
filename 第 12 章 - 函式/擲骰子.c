#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//きΩそタ浑

int main(){
    srand(time(0)); //絋玂–Ω磅︽块计ぃ
    int i;
    for(i = 1; i <= 5; i++){
        int dice = rand() % 6 + 1;
        //緇计计眖0秨﹍┮緇计璶1
        printf("%d\n",dice);
    }
        /*
        琵rand()计1~6for癹伴禲Ω繦诀计
        讽繦诀计 < 1 ┪ > 6 碞禲Ω繦诀计
        翴琌rand计禫狡Ω计禫
        do{
            dice = rand();
        }  while (dice < 1 || dice > 6);
        printf("%d\n", dice);
        */
    return 0;
}
