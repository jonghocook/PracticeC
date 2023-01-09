#include <stdio.h>

int main(void)
{
    int num;
    printf("Start ");

    for(num=1; num<20; num++)
    {
        if(num%2==0||num%3==0)
            continue;

            printf("%d ",num);
    }
    printf("End ");
    
    return 0;
}