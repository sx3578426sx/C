#include <stdio.h>
//�Q�ν�ȶ��Ǫ��վ�ӹF��ABC��BCA
int main(){
    int a, b, c, t;
    printf("Please enter three integer: ");
    scanf("%d%d%d", &a, &b, &c);
    t = a;
    a = b;
    b = c;
    c = t;
    printf("%d%d%d", a, b, c);
    return 0;
}
