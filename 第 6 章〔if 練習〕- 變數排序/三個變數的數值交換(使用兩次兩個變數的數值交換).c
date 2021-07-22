#include <stdio.h>
//ノ结抖秸俱ㄓ笷ΘABC△BCA
//ㄏノㄢΩㄢ跑计计ユ传
int main(){
    int a, b, c, t;
    printf("Please enter three integer: ");
    scanf("%d%d%d", &a, &b, &c);
    t = a;
    a = c;
    c = t;

    t = b;
    b = a;
    a = t;
    printf("%d%d%d", a, b, c);
    return 0;
}
