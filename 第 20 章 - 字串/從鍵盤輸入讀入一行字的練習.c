#include <stdio.h>

/*
�N�޼�a�ǤJstr[]�A�ϥ�while �j��Ascanf�ϥΪ̥i�H�A����Enter���~��s��
����UEnter���|����A�p�G�j��X�{"����"�h�����j��
��X�{����ɡAstr[i] = '\0'
*/
void str_read(char str[]){
    int i = 0;
    while(1){
        scanf("%c", &str[i]);
        if(str[i] == '\n'){
            break;
        }
        i++;
    }
    str[i] = '\0';
}

int main(){
    char a[15];
    str_read(a);
    printf("%s\n", a);
}
