#include <stdio.h>
//三個變數由小到大排序
/*變數間可能的大小順序關係
a <= b <= c   →不用做任何處理
a <= c < b   →c跟b交換 c,b → b,c
b < a <= c   →b跟a交換
b <= c < a   →b跟a交換=acb，c跟b交換
c < a <= b   →c跟a交換=acb，c跟b交換
c < b < a   →c跟a交換=acb
可畫在紙上將相同交換的分類
影片講解：https://www.youtube.com/watch?v=NyhgzqQoSNA&list=PLY_qIufNHc293YnIjVeEwNDuqGo8y2Emx&index=57
結論得出三個需做交換：
b < a
c < a
c < b
*/
int main(){
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    printf("Before: %d %d %d \n", a, b, c);
    if(b < a){
        t = a;
        a = b;
        b = t;
    }
    if(c < a){
        t = a;
        a = c;
        c = t;
    }
    if(c < b){
        t = b;
        b = c;
        c = t;
    }
    printf("After: %d %d %d", a, b, c);
    return 0;
}
