#include <stdio.h>
int max2(int, int);

int main(){
    int i, j;
    printf("i = ");
    scanf("%d", &i);
    printf("j = ");
    scanf("%d", &j);
    printf("Max is %d.\n", max2(i, j));
    return 0;
}

int max2(int i, int j){
    int max;
    if(i >= j){
        max = i;
    }
    else{
        max = j;
    }
    return max;
}
/*
�Y�n�ٲ�max�ܼơA�i�H�g�o��
int max2(int i, int j){
    if(i >= j){
        return i;
    }
    else{
        return j;
    }
}
*/
