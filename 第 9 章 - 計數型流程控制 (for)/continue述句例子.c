#include <stdio.h>
//�b���ư���z�y�����L�᭱���{���϶�
int main(){
    int a;
    for(a = 1; a <= 10; a++){
        if(a == 5){
            continue;
        }
        printf("%d\n", a);
    }
    return 0;
}

//�W�z�Ҥl�̫�|�L�X1,2,3,4,6,7,8,9,10�A���L5
