#include <stdio.h>

int Add(int num1, int num2)     //인자전달 ㅇ 반환값 ㅇ
{
    return num1+num2;
}

void ShowAddResult(int num)     //인자전달 ㅇ 반환값 /
{
    printf("덧셈결과 출력 : %d \n", num);
}

int ReadNum(void)               //인자전달 / 반환값 ㅇ
{
    int num;
    scanf("%d",&num);
    return num;
}

void HowToUseThisProg(void)     //인자전달 / 반환값 /
{
    printf("두개의 정수를 입력하면 덧셈결과 출력. \n");
    printf("두개의 정수를 입력하세요. \n");
}

int main(void)
{
    int result, num1, num2;
    HowToUseThisProg();
    num1=ReadNum();
    num2=ReadNum();
    result = Add(num1,num2);
    ShowAddResult(result);
    return 0;
}