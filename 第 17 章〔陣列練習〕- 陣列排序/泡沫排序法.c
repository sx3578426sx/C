#include <stdio.h>
//使用者輸入5個整數，使用泡沫排序法，將五個整數由小到大排序
int main(){
    int i, j, t, v[5];
    printf("請輸入5個整數:\n");
    for(i = 1; i <= 5; i++){
        scanf("%d", &v[i-1]);
    }

    /*因為數字有五個，只需要四輪，就可以排完
    當第一輪跑完，最後一個數字就不用比較了，以此類推*/
    for(i = 0; i < 4; i++){
        for(j = 0; j <= 4 - i; j++){
            if(v[j] > v[j+1]){
                t = v[j];
                v[j] = v[j+1];
                v[j+1] = t;
            }
        }
    }

    for(i = 0; i < 5; i++){
        printf("%d\n", v[i]);
    }
    return 0;
}
