#include <stdio.h>
//透過max2函式延伸出max3

int max2(int, int);
int max3(int, int, int);

int main(){
    int i, j, k;
    printf("請輸入三個數字：");
    scanf("%d %d %d", &i, &j, &k);
    printf("Max is %d.\n", max3(i, j, k));
    return 0;
}
//先比較 i, j 的大小
int max2(int i, int j){
    if(i >= j){
        return i;
    }
    else{
        return j;
    }
}

//比較完 i, j ，較大者跟 k 比較
int max3(int i, int j, int k){
    return max2(max2(i, j), k);
    /*會先比較()裡面的引數max2(i,j)
    然後再比較外面的max2*/
}
