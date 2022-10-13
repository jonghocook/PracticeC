/* [7-3] 사용자가 입력하는 정수를 계속 더해 나간다.
만약 0이 입력되면 지금까지 입력된 정수 덧셈 결과를 출력하고
프로그램을 종료시킨다. */

#include <stdio.h>

int main(void) {
    int num = 1;
    int result;
    while(num != 0) {
        printf("더할 값을 입력하세요 : ");
        scanf("%d", &num);
        result += num;
    }
    printf("모두 더한 값은 %d 입니다. \n", result);
    return 0;
}