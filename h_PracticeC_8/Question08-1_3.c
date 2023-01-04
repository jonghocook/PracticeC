/* 
 문제 3 : 학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성.
         학생의 성적이 90점 이상이면 A 80점 이상이면 B 70점 이상이면 C 50점 이상이면 D , 그 미만은 F.
         프로그램 실행시 순서대로 국어, 영어, 수학의 점수를 입력받고 평균을 구한 후 학점을 출력한다. 개어렵네
 */

#include <stdio.h>

int main(void)
{
    int korean, english, math;
    int result;

    printf("국어, 영어, 수학 점수 입력 : ");
    scanf("%d,%d,%d" , &korean, &english, &math);
    
    result=(korean+english+math)/3;
         
    printf("평균 : %d \n",result);


    if (result>=90.0)
        printf(" 학점 : A \n");

    else if (result>=80.0)
        printf(" 학점 : B \n");
        
    else if (result>=70.0)
        printf(" 학점 : C \n");

    else if (result>=50.0)
        printf(" 학점 : D \n");

    else 
        printf(" 학점 : F \n");
 

    return 0;

}
