/*연습문제 7-1
문제 1) 사용자로부터 숫자를 하나 입력받아서, 그 수만큼 Hello World!를 출력하는 프로그램을 작성하자.
*/

#include <stdio.h>                      //standard input output 표준 입출력 해더를 포함해가지고 작성한다 뭐 그런 내용 아닐런지..

int main(void) {                        //int(정수)를 반환하고 void(아무값도 받지않는)를 인자로 하는 main함수입니다. int를 반환하는 것은 main함수의 종료판정을 0또는그외 값으로 판정하기때문에 int를 반환하는걸로 알고 있습니다.
    int val;                            //val이라는 변수를 하나 선언합니다. 값을 입력받을 공간을 마련하는걸로 이해합니다.

    printf("몇번 외쳐볼까? : ");            //몇번 외쳐볼까라고 출력한번 화면에 때려주고요.
    scanf("%d", &val);                  //scanf함수를 통해 아까 선언한 val을 통해 값을 입력받습니다.

    while(val>0) {                      //반복문을 돌립니다. val에 들어간 값이 0보다 작을경우 false로 조건이 깨집니다.
        printf("Hello World! \n");      //헬로 월드 외쳐주고요.
        --val;                          //val값에 1을 빼줍니다.
    }                                   //반복문 계속...
    return 0;                           //여기까지 와서 이상이 없으면 0을 반환하는것으로 main함수 끝!
}