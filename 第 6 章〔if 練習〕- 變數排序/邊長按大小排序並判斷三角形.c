#include <stdio.h>
    //��if�̭��u���@�y�A{}�i�H�ٲ��A
    //����ĳ�s�ⳣ��A���M�׮ɫh�Τ@�Y�i�C
int main(){
    int side1, side2, side3,t;
    printf("Please enter three integer: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    //���j�p�Ƨ�
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

    //�P�_��������T����
    if(side1 == side3){
        printf("���T����");
    }
    if(side1 == side2 || side2 == side3)
        printf("���y�T����");
    if(side1 * side1 + side2 *side2 == side3 * side3)
        printf("�����T����");

    return 0;
}
