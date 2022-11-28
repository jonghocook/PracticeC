//문제 2
//프로그램 사용자로부터 양의 정수를 하나 입력받은 후 그 수만큼 3의 배수를 출력하는 프로그램 제작

#include <stdio.h>

int main(void)
{
    int num=0;
    int cnt=1;

    printf("3의 배수를 몇번 출력할까요? \n");
    scanf("%d", &num);

    while(cnt<=num)
    {
        printf("%d ", 3 * cnt);     
        cnt++;
    }
    return 0;
}