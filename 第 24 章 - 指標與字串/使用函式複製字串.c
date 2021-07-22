#include <stdio.h>
#include <string.h>

//使用strcpy複製字串
int main(){
    const char *source = "test";    //可在前面加const，因為這可讀就好
    char destination[5];
    /*
    char *destination;
    注意變數命名時不能命名指標，因為這樣只有存址，
    若要複製source的值，必須指定位置給它
    */
    strcpy(destination, source);    //destination字元陣列會隱性轉型為指標
    //strcpy(可讀又可寫的字元陣列,可讀的字元陣列或指標陣列
    printf("%s\n", destination);
    return 0;
}
