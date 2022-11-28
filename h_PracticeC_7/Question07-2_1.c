/*
    문제1
    5개의 정수를 받아서 그 수의 합을 출력하는 프로그램 작성.
    조건 1. 정수는 반드시 1 이상이어야하고 1미만일 경우 재입력을 요구한다.
    */

#include <stdio.h>

int main(void)
{
    int A=0;
    int B=0;
    int C=0;

    while (A<5)
    {
        while (B<1)
        {
            printf("1이상의 정수 입력 [ %d번째 ] : \n",A+1);
            scanf("%d", &B);
        }
        C+=B;
        B=0;
        A++;
     
    }
    printf("총 합 : %d \n" ,C);
    return 0;


}