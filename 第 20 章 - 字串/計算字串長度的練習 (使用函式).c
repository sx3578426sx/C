#include <stdio.h>

//�p��}�C���ת��m��
int str_len(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
   char str[11] = "Hello world";
   printf("Length: %zu\n", sizeof(str));
   printf("Length: %d\n", str_len(str));
   return 0;
}
