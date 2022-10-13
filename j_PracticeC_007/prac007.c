/* [7-5] 입력된 정수 평균을 구하는 프로그램을 작성하자. 제일 먼저 입력할 정수 개수를
사용자로부터 입력받는다. 그리고 그 수만큼 정수를 입력받아 평균값을 출력해 준다.
입력받은 값은 정수지만, 평균값은 실수가 될 것이다. */

#include <stdio.h>

int main(void)
{
    int val, val2, num, result = 0;
    float average = 0.0f;

    printf("몇 번 더할까요? ");
    scanf("%d", &val);

    val2 = val;

    while(val > 0)
    {
        printf("더할 값을 입력해주세요 : ");
        scanf("%d", &num);
        result += num;
        --val;
    }

    average = (float)result/val2;
    printf("더한 값 \"%d\"을 \"%d\"로 나누면 평균 값은 \"%.2f\" 입니다. \n", result, val2, average);

    return 0;
}