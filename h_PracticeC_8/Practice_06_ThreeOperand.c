#include <stdio.h>



/* 예제

int main(void)
{
    int num, abs;
    printf("정수 입력 : ");
    scanf("%d", &num);

    abs = num>0 ? num : num*(-1);
    printf("절대값 : %d \n", abs);


    return 0;

}
*/

//응용

int main(void)

{
    int num1, num2;
    printf("정수 입력 [0보다 작으면 10 곱한 수가 나옴] : ");
    scanf("%d", &num1);

    num2 = num1>0 ? num1 : num1*10;
    printf("결과 : %d \n", num2);


    return 0;

}