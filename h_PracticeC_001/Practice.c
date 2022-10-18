
#include <stdio.h>

int main(void)
{
    int dan1=2;
    int dan2=0;

    while (dan1<10)
    {
        dan2=1;
        while (dan2<10)
        {
            printf("%dX%d=%d \n", dan1, dan2, dan1*dan2);
            dan2++;
        }

        dan1++;
    }

    return 0;
    
    
    
}