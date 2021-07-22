#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("enter num1: ");
    scanf("%d", &num1);
    printf("enter num2: ");
    scanf("%d", &num2);
    printf("enter num3: ");
    scanf("%d", &num3);
    double avg = (num1 + num2 + num3) / 3.;
    printf("%f", avg);
    return 0;
}
