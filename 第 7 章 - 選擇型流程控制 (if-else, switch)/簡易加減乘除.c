#include <stdio.h>
    //�[����Ÿ��O�r��
    //���צ]�������k�A�G�ίB�I��
int main(){
    int num1,num2;
    char op;
    float answer;
    scanf("%d%c%d", &num1, &op, &num2);
    if(op == '+'){
        answer = num1 + num2;
    }
    else if(op == '-'){
        answer = num1 - num2;
    }
    else if(op == '*'){
        answer = num1 * num2;
    }
    else if(op == '/'){
        answer = (float)num1 / num2;
    }
    printf("The answer is %f\n", answer);
    return 0;
}
