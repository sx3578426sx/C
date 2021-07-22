#include <stdio.h>

int main(){
    int a, b, c, d, max;
    printf("Please enter four integer: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max = a;
    if(b > a){
        max = b;
    }
    if(c > a){
        max = c;
    }
    if(d > a){
        max = d;
    }
    printf("The maxinum is %d .", max);
    return 0;
}
