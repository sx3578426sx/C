#include <stdio.h>
/*
    ��ϥΪ̿�J����Ƥ��ŦX�]�w�����A�A�h��ܿ�J���~�C
    �Ҧpint�A�ϥΪ̥u���J��ơA���O��J�Fabc�C
    �p�Gscanf(���쪺�^�ǭȬO0��ܨϥΪ̿�J�D��ƫ��A���r��)
    �i�ΤU�C���{���X����
    scanf("%d", &num);
    printf("%d", num);
    */
int main(){
    int num;
    if(scanf("%d", &num) == 1){
        printf("%d\n", num);
    }
    else{
        printf("���~:�u���J��ơC\n");
    }
    return 0;
}
