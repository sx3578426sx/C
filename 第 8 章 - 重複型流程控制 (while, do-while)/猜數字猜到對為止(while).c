#include <stdio.h>
/*利用while猜數字猜到對為止，並記錄猜了幾次。
    為了確保至少加一次，所以count 要加1
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    count = count + 1;
    第一次猜或猜錯繼續猜，猜對則跳脫迴圈
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
