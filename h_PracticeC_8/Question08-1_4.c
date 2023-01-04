 
//문제 4 : 문제 2를 조건연산자를 이용하는 형태로 변경하기 
 

#include <stdio.h>


int main(void)
{
    int num1, num2;
    int result;

    printf("두개의 정수 입력 : ");
    scanf("%d,%d" , &num1,&num2);

    result=(num1>num2)?(num1-num2):(num2-num1);

    printf("결과 : %d \n",result);

    return 0;

}

