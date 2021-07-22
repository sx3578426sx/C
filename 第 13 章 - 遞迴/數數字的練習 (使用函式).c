#include <stdio.h>
void countTo3(int); //1~3
void countTo1(int); //3~1

int main(){
    int i;
    printf("印出1到3\n");
    countTo3(1);
    printf("\n");

    i = 3;
    printf("印出3到1\n");
    countTo1(3);
    return;
}

void countTo3(int i){   //印出1到3的函式
    if(i <= 3){
        printf("%d\n", i);
        countTo3(i + 1);
    }
}

/*
若將19跟20行順序交換，就能印出3到1
void countTo3(int i){   //印出3到1的函式
    if(i <= 3){
        printf("%d\n", i);
        countTo3(i + 1);
    }
}
*/
void countTo1(int i){   //印出3到1的函式
    if(i >= 1){
        printf("%d\n", i);
        countTo1(i - 1);
    }
}
