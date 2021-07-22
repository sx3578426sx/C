#include <stdio.h>
    //當if裡面只有一句，{}可以省略，
    //但建議新手都放，做專案時則統一即可。
int main(){
    int side1, side2, side3,t;
    printf("Please enter three integer: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    //按大小排序
    if(side2 < side1){
        t = side1;
        side1 = side2;
        side2 = t;
    }
    if(side3 < side1){
        t = side1;
        side1 = side3;
        side3 = t;
    }
    if(side3 < side2){
        t = side2;
        side2 = side3;
        side3 = t;
    }

    //判斷何種類型三角形
    if(side1 == side3){
        printf("正三角形");
    }
    if(side1 == side2 || side2 == side3)
        printf("等腰三角形");
    if(side1 * side1 + side2 *side2 == side3 * side3)
        printf("直角三角形");

    return 0;
}
