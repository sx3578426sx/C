#include <stdio.h>
//%c�O���@�Ӧr���A%s�O���@�Ӧr��C

void charStr(char str[]){
    int i;
    for(i = 0; str[i] != '\0'; i++){
        printf("%c",str[i]);
    }
    printf("\n");
}

int main(){
    //�r���}�C�i�H��''���O�]��C�Ӧr�A�]�i�H��""�]��������r��C
    //�b����禡�ɡA�]�w'\0'�A��@�פ�j�骺�ȡC
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char a[] = "Hello";
    charStr(str);
    printf("%s\n", a);
}
