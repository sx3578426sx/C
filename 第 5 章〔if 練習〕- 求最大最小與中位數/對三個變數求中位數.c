#include <stdio.h>
//��J�T�Ӿ�ơA��X�L�̪������
int main(){
    int a, b, c, med;
    printf("Please enter three integer: ");
    scanf("%d%d%d", &a, &b, &c);
    med = a;
    if(a > b && b > c){
        med = b;
    }
    if(a > c && c > b){
        med = c;
    }
    printf("The median is %d .", med);
}
