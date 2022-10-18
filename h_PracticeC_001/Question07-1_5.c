/*
문제 5
입력받은 정수의 평균을 출력
1. 몇개의 정수를 입력할 것인지 묻고 그 수만큼 정수를 입력받는다
2. 평균 값은 소수점 이하까지 계산해서 출력한다
*/

#include <stdio.h>

int main(void)
{
    int total=0, i=0;
    int num, input;

    printf("입력할 정수의 수? : ");
    scanf("%d", &num);

    while (i++<num)
    {
        printf("정수 입력 : ");
        scanf("%d", &input);
        total+=input;
    }
    
    printf("입력된 정수의 평균 : %f, \n", (double)total/num);
    return 0;
    


}
