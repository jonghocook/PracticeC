//문제 5

#include <stdio.h>

int main(void)
{
    int star;
    int circle=0;

    while (star<5)
    {
        while (circle<star)
        {
            printf("o");
            circle++;
        }

        circle=0;
        printf("* \n");
        star++;
    
    }

    return 0;
}
