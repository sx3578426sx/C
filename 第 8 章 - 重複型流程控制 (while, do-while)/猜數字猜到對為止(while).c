#include <stdio.h>
/*�Q��while�q�Ʀr�q��אּ��A�ðO���q�F�X���C
    ���F�T�O�ܤ֥[�@���A�ҥHcount �n�[1
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    count = count + 1;
    �Ĥ@���q�βq���~��q�A�q��h����j��
int main(){
    int answer = 4;
    int guess;
    int count = 0;

     while(count == 0 || guess != answer){
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count = count + 1;
        if(guess < answer){
            printf("Too small!\n");
        }
        else{
            printf("Too large!\n");
        }
    }
            printf("Correct!    (%d)\n", count);
        return 0;
    }*/
    int main(){
    int answer = 4;
    int guess;
    printf("Please enter your guess:\n ");
    do{
        scanf("%d", &guess);
        if(guess < answer){
            printf("Too small!\n");
        }
        else if(guess > answer){
            printf("Too large!\n");
        }
        else{
            printf("Correct!\n");
        }
    }
     while(guess != answer);
    return 0;
    }
