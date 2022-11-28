//문제 1
//프로그램 사용자로부터 양의 정수를 하나 입력 받아서, 그 수만큼 "Hello World" 를 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main(void)
{
    int text=0, num=1;                              //변수 선언
    printf("Hello World를 몇 번 입력할까요? \n");        //텍스트 출력
    scanf("%d", &text);                             //입력값

    while(num<=text)                                //num의 값이 text의 값이 될 때 까지 헬로월드를 출력하게 한다
    {
        printf("Hello World \n");
        num++;                                       //num이 후위증가한다
    }
    return 0;
}