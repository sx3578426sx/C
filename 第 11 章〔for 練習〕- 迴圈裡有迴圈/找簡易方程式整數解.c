#include <stdio.h>
/*
�w���⥿��Ƭۥ[��30�A�ۭ���221�C�D����Ӿ�Ƭ�?
*/

int main(){
   int i, j;
   for(i = 1; i <= 30; i++) {
        for(j = 1; j <= 30; j++){
            if(i + j == 30 && i * j == 221 && i <= j){ //����n�L���ƪ��Ʀr�A��i <= j
                printf("i = %d, j = %d\n", i, j);
            }
        }
   }
   /*
   �ĤG�ا@�k�A����n����
   int i, j;
   for(i = 1; i <= 30/2; i++) {         // �i�N i �]��1~15
        for(j = 30/2; j <= 30; j++){  // j �]��15~30
            if(i + j == 30 && i * j == 221){
                printf("i = %d, j = %d\n", i, j);
            }
        }
   }

   �u�Τ@��for�j��A�Q��i��j�w���ۥ[��30�����Y
   int i;
   for(i = 1; i <= 30/2; i++) {
        int j = 30 - i;
        if(i * j == 221){
            printf("i = %d, j = %d\n", i, j);
        }
   }
   */
   return 0;
}
