#include <stdio.h>
//�T���ܼƥѤp��j�Ƨ�
/*�ܼƶ��i�઺�j�p�������Y
a <= b <= c   �����ΰ�����B�z
a <= c < b   ��c��b�洫 c,b �� b,c
b < a <= c   ��b��a�洫
b <= c < a   ��b��a�洫=acb�Ac��b�洫
c < a <= b   ��c��a�洫=acb�Ac��b�洫
c < b < a   ��c��a�洫=acb
�i�e�b�ȤW�N�ۦP�洫������
�v�����ѡGhttps://www.youtube.com/watch?v=NyhgzqQoSNA&list=PLY_qIufNHc293YnIjVeEwNDuqGo8y2Emx&index=57
���ױo�X�T�ӻݰ��洫�G
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
