

#include <stdio.h>

int main(void)
{
   int total=0;
   int i, num;
   printf("0부터 입력한 수 까지의 덧셈 : \n");
   scanf("%d", &num);

   for (i=0; i<=num; i++)
    total+=i;

    printf("0부터 %d 까지의 덧셈 결과 : %d \n", num, total);
   
   

         
    return 0;
}




/* for문 예시

#include <stdio.h>

int main(void)
{
   for (int num=0; num<3; num++)
   {
    printf("Hi \n");
   }
         
    return 0;
}

*/