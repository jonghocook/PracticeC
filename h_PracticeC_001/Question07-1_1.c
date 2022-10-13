//문제 1
//프로그램 사용자로부터 양의 정수를 하나 입력 받아서, 그 수만큼 "Hello World" 를 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main(void)
{
    int text=0, num=1;
    printf("Hello World를 몇 번 입력할까요? \n");
    scanf("%d", &text);

    while(num<=text)
    {
        printf("Hello World \n");
        num++;
    }
    return 0;
}