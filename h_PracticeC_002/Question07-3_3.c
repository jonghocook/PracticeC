//문제 3 : while문의 중첩으로 이루어진 예제를 do~while문의 중첩으로 바꿔보아라

#include <stdio.h>

int main(void)
{
    int cur=2;
    int is=0;

    do
    {
        is=1;
        do
        {
            printf("%dX%d=%d \n", cur,is,cur*is);
            is++;

        } while (is<10);
        cur++;
        
    } while (cur<10);
    
    return 0;
    
}


/* int main(void)
{
    int cur=2;
    int is=0;

    while (cur<10)
    {
        is=1;
        while (is<10)
        {
            printf("%dX%d=%d \n", cur, is, cur*is);
            is++;
        }
        cur++;
        
    }
    return 0;
    
}
*/