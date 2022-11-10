/*문제2_0이상 100이하의 정수 중 짝수의 합을 출력하는 프로그램을 do~while문으로 구현하기
덧셈의 결과는 2550이 되어야 한다.*/

#include <stdio.h>

int main(void)
{
    int num=0;
    int total=0;

    do
    {
        num=num+2;
        total+=num;

    } while (num<=100);
    
    printf("0~100까지의 짝수 합 : %d \n",total);

    return 0;
}
 
