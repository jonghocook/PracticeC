/* [7-4] 사용자로부터 입력받은 숫자에 해당하는 구구단을 출력하되,
역순으로 출력하는 프로그램을 작성하자. */

#include <stdio.h>

int main(void)
{
    int val;
    int count = 9;

    printf("구구단 몇단을 출력할까요? ");
    scanf("%d", &val);

    printf("%d 단 \n", val);

    while(count > 0)
    {
        printf("%d x %d = %d \n", val, count, val * count);
        --count;
    }
    return 0;
}