#include <stdio.h>

int main(){
    int id;
    printf("ID: ");
    scanf("%d", &id);
    switch(id){
        case 2:
        case 3:
        case 4:
            printf("John");
            break;
        case 6:
            printf("Amy");
            break;
        case 9:
            printf("Emoey");
            break;
        default:
            printf("Not Found!");
            break;
    }
    return 0;
}
