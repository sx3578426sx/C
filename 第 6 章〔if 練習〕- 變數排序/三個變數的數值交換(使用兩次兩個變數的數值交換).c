#include <stdio.h>
//�Q�ν�ȶ��Ǫ��վ�ӹF��ABC��BCA
//�ϥΨ⦸����ܼƪ��ƭȥ洫
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
