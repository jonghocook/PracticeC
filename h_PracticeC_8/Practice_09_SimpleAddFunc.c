#include <stdio.h>

int Add(int num1, int num2)     //인자전달 ㅇ 반환값 ㅇ
{
    return num1+num2;
}

int main(void)
{
    int result;
    result = Add(3,4);
    printf("덧셈 결과1 : %d \n", result);
    result = Add(5,8);
    printf("덧셈 결과1 : %d \n", result);
    return 0;
}