#include <stdio.h>
//�����ܼƨD�̤p��
int main(){
    int a, b, min;
    printf("Please enter two integer: ");
    scanf("%d%d", &a, &b);
    min = a;

    if(b < a){
        min = b;
    }
    printf("The maxinum is %d .", min);
    return 0;
}
