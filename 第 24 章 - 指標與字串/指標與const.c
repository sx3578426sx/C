#include <stdio.h>
#include <string.h>

int main(){
    char a[5] = "test";     //�Ĥ��쬰'\0'
    char *b = "test";

    char a[0] = 'T';        //O�A�N��0��r����g
    char *b = 'T';          //X�A���w�q�欰�A�|�y�����i�w������G
    /*�q�`�ڭ̤��|��char *b�A�]���e���Q��g�Ӧ����w�q�欰�A
    �{���O���i�H�����w�q�欰���C
    ���F�Ϥ��ڭ̤����g���A�|�b�̫e���[�Wconst*/

    //�Y�[�Wconst �@�w�|����l�ȡA�Y������l�ȡA����]�����g
    const char *c = "test";     //�[�Jconst�����ܼƥu��Ū�A�����g
    const char *d;                  //���~���g�k�A������l�ȡC
}
