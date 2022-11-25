//예제

#include <stdio.h>

int main(void)
{
    double total=0.0;
    double input=0.0;
    int num=0;

    for( ; input>=0.0 ; )
    {
        total+=input;
        printf("실수 입력 (minus to quit) : ");
        scanf("%lf", &input);
        num++;
    }
    printf("평균: %f \n", total/(num-1));
    return 0;
}


 // -1.0 조건을 위해 식이 4번 진행되기때문에 num-1 이 추가된다
