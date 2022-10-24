#include <stdio.h>

int main(void)
{
    int total=0, num=1;

    while (num!=0)
    {
        printf("정수 입력 :(0 to quit) : ");
        scanf("%d", &num);
        total+=num;
    }
    printf("합계 : %d", total);             // 결과값에 %가 붙는 이유를 모르겠음
    return 0;               
    
}



//do~while문 예시

/*    do
    {
        printf("정수 입력 :(0 to quit) : ");
        scanf("%d", &num);
        total+=num;

    } while (num!=0);
    printf("합계 : %d \n", total);
    return 0;
}
*/