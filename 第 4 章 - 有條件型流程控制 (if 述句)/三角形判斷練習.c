#include <stdio.h>

int main(){
    int a, b, c;
    printf("Please enter the lengths: ");
    scanf("%d %d %d", &a,&b,&c);

    if(a == b && b == c){
        printf("���T����");
    }
    else if(a == b || b == c || a == c){
        printf("���y�T����");
    }
    else if((a*a + b*b) == (c * c) || (a*a + c*c) == (b * b) || (b*b + c*c) == (a * a)){
        printf("�����T����");
    }
}
