// 문제 1 : 1~100 정수 중 7, 9의 배수를 출력하는 프로그램. 단 동시에 7, 9의 배수인 경우 한번만 출력

#include <stdio.h>

int main(void)
{
    int num;
    for(num=1; num<100; num++)          // num은 1이고 100까지 후위증가
    {
        if(num%7==0 || num%9==0)        
            printf("%d ", num);
    }

    return 0;

}

//어려워서 베낌 ㅎ