#include <stdio.h>
#include <string.h>

int main(){
    char a[5] = "test";     //第五位為'\0'
    char *b = "test";

    char a[0] = 'T';        //O，將第0位字元改寫
    char *b = 'T';          //X，未定義行為，會造成不可預知的後果
    /*通常我們不會用char *b，因為容易被改寫而有未定義行為，
    程式是不可以有未定義行為的。
    為了區分我們不能改寫它，會在最前面加上const*/

    //若加上const 一定會給初始值，若不給初始值，之後也不能改寫
    const char *c = "test";     //加入const讓此變數只能讀，不能改寫
    const char *d;                  //錯誤的寫法，未給初始值。
}
