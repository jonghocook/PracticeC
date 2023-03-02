#include <stdio.h>

int main(void)
{
    int num;
    printf("1이상 5이하의 정수 입력 : ");
    scanf("%d", &num);

    switch(num)
    {
    case 1:
        printf("1은 One \n");
        break;
    case 2:
        printf("2는 Two \n");
        break;
    case 3:
        printf("3은 Three \n");
        break;
    case 4:
        printf("4는 Four \n");
        break;
    case 5:
        printf("5는 Five \n");
        break;
    default:
        printf("I don't know \n");

    }
    return 0;
}