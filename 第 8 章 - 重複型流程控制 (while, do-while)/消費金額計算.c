#include <stdio.h>
/*�ռg�@�{�����ϥΪ̤��O��J�C�Ӱӫ~���s���C
��J��0�ɨ̷Ӱ����i�浲���A��ܽ�X���`���B
�����G
1��90��
2��75��
3��83��
4��89��
5��71��
*/
int main(){
    int num, sum;
    printf("Please enter your number:\n");
    do{
        scanf("%d", &num);
        switch(num){
            case 1:
                sum += 90;
                break;
            case 2:
                sum +=  75;
                break;
            case 3:
                sum +=  83;
                break;
            case 4:
                sum +=  89;
                break;
            case 5:
                sum +=  71;
                break;
        }
    } while(num != 0);
    printf("Total: %d", sum);
    return 0;
}
