#include <stdio.h>
//利用賦值順序的調整來達成ABC→BCA
//使用兩次兩個變數的數值交換
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
