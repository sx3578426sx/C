#include <stdio.h>

int main(){
    char ch = 'A';
    printf("%c\n", ch + 32);

    //�m��:�r�����j�p�g�ഫ
    //todo:�p�G�ϥΪ̿�JA�A�h��Xa
    //todo:�p�G�ϥΪ̿�JB�A�h��Xb
    //todo:�p�G�ϥΪ̿�JZ�A�h��Xz
    char ch2;
    printf("Please enter char: ");
    scanf("%c", &ch2);
    printf("%c", ch2 + 32);
    return 0;
}
