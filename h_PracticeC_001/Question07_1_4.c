//문제 4
//프로그램 사용자로부터 입력받은 숫자에 해당하는 구구단을 역순으로 출력하는 프로그램

#include <stdio.h>

int main(void)
{
    int num;
    int dan=9;

    printf("역순으로 출력할 구구단 입력 : \n");
    scanf("%d", &num);

    while (dan>0)
    {
        printf("%dx%d=%d \n", num,dan,num*dan);
        --dan;
    }

    return 0;
    
    
}