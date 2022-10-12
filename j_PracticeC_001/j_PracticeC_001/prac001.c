/* hello_while.c 
반복조건이 만족하는 동안 내용을 반복 */
#include <stdio.h>

int main(void) {
    int i=0;
    
    while(i<10)
    {
        printf("Hello World! \n");
        i++;
    }
    return 0;
}
