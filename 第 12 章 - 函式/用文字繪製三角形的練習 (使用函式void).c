#include <stdio.h>
//�Li�ӬP�P�Avoid�@���^�ǭȫ��A�ɡA��ܸӨ禡���^�ǥ���ȡC
void print_stars(int i);

int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i;
    for(i = 1; i <= N; i++){
        print_stars(i); //�I�s�L i �ӬP�P���禡
        printf("\n");
    }
    return 0;
}

void print_stars(int i){
    int j;
    for(j = 1; j <= i; j++){
        printf("*");
    }
    //return;   �]��void���^�ǡA�ҥHreturn�i�H�ٲ��C
}
