#include <stdio.h>
void countTo3(int); //1~3
void countTo1(int); //3~1

int main(){
    int i;
    printf("�L�X1��3\n");
    countTo3(1);
    printf("\n");

    i = 3;
    printf("�L�X3��1\n");
    countTo1(3);
    return;
}

void countTo3(int i){   //�L�X1��3���禡
    if(i <= 3){
        printf("%d\n", i);
        countTo3(i + 1);
    }
}

/*
�Y�N19��20�涶�ǥ洫�A�N��L�X3��1
void countTo3(int i){   //�L�X3��1���禡
    if(i <= 3){
        printf("%d\n", i);
        countTo3(i + 1);
    }
}
*/
void countTo1(int i){   //�L�X3��1���禡
    if(i >= 1){
        printf("%d\n", i);
        countTo1(i - 1);
    }
}
