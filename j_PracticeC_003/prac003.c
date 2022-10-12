/*연습문제 7-1
문제 1) 사용자로부터 숫자를 하나 입력받아서, 그 수만큼 Hello World!를 출력하는 프로그램을 작성하자.
*/

#include <stdio.h>

int main(void) {
    int val;

    printf("몇번 외쳐볼까? : ");
    scanf("%d", &val);

    while(val>0) {
        printf("Hello World! \n");
        --val;
    }
    return 0;
}