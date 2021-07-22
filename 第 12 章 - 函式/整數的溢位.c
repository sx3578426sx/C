#include <stdio.h>
#include <limits.h>
//limits.h會提供整數型態可表示的範圍相關資訊
/*無號整數(unsigned int)的溢位是有意義的(用來求餘數)
它會把最大值+1除看餘多少*/
int main(){
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
    return 0;
}
