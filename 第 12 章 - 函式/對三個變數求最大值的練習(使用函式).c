#include <stdio.h>
//�z�Lmax2�禡�����Xmax3

int max2(int, int);
int max3(int, int, int);

int main(){
    int i, j, k;
    printf("�п�J�T�ӼƦr�G");
    scanf("%d %d %d", &i, &j, &k);
    printf("Max is %d.\n", max3(i, j, k));
    return 0;
}
//����� i, j ���j�p
int max2(int i, int j){
    if(i >= j){
        return i;
    }
    else{
        return j;
    }
}

//����� i, j �A���j�̸� k ���
int max3(int i, int j, int k){
    return max2(max2(i, j), k);
    /*�|�����()�̭����޼�max2(i,j)
    �M��A����~����max2*/
}
