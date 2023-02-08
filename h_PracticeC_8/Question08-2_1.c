//구구단을 출력하되 2,4,6,8단만 출력. 2단은 2단까지 4단은 4단까지 6단은 6, 8단은 8까지 출력.

#include <stdio.h>

int main(void)
{
    int i, j;
    for(i=1; i<10; i++)
    {
        if(i%2!=0)
        continue;

        for(j=1; j<10; j++)
        {
            if(i<j)
                break;
            printf("%dx%d=%d \n", i, j, i+j);
        }
    }
    return 0;
}
