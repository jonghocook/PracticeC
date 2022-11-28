//문제 3
//프로그램 사용자로부터 계속해서 정수를 입력받는다. 그리고 그 값을 계속해서 더해나간다. 이러한 작업은 프로그램사용자가
//0을 입력할 때까지 계속되어야하며, 0이 입력되면 입력된 모든 정수의 합을 출력하고 프로그램을 종료시킨다

#include <stdio.h>

int main(void)
{
    int total=0;
    int num=1;

    while (num!=0)
    {
        printf("정수 입력 (0 to quit) : ");
        scanf("%d", &num);
        total+=num;
    }
    
    printf("입력된 정수의 총 합 : %d, \n", total);
    return 0;
    


}
