#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//繦诀玻ネ10计硂10计琌眖1~10ぇ丁常⊿Τ狡

int main(){
    /*ノ璸计竟はσêㄇ计瞷筁
    砞﹚璸计竟1~10Ω计0讽Τ瞷筁碞+1讽Ω计1
    碞穝禲睹计*/
    srand(time(0));
    int i, n, counter[10]={0};
    for(i = 1; i <= 10; i++){
        do{
            n = rand() % 10 +1;
        }while(counter[n-1] != 0);
        printf("%d\n", n);
        counter[n-1]++;
    }
    return 0;
}
