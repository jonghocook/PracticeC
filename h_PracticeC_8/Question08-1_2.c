// 문제 2 : 두개의 정수를 입력받아서 두 수의 차를 출력하는 프로그램. 단 무조건 큰 수에서 작은 수를 빼야함 [ 순서 상관 없이 큰 수에서 작은 수 빼야댐 ]
#include <stdio.h>

int main(void)
{
    int num1, num2;
    int result;

    printf("두개의 정수 입력 : ");
    scanf("%d,%d" , &num1,&num2);

    if (num1<num2)
        result=num2-num1;

    else
        result=num1-num2;

    printf("결과 : %d \n",result);

    return 0;

}
