//문제 1. 두개의 정수를 입력받아 두 정수를 포함한 두 정수 사이에 존재하는 정수들의 합을 출력하는 프로그램

#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int result;

    printf("두개의 정수 입력 : ");
    scanf("%d, %d", &num1, &num2);

    for (result=0; num1<=num2; num1++)
    {
        
        result+=num1;
    }
    
    printf("두 정수와 사이에 존재하는 정수들의 합 : %d \n", result);

    return 0;


}
    
 // 와 풀어따
 // 실행 후 숫자 입력 시 , 가 들어가야함