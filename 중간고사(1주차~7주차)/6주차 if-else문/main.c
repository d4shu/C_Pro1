#include <stdio.h>

void eatLunch(void){
    int money;
    printf("돈이 얼마 있나요? : ");
    scanf("%d", &money);
    if(money >= 10000){
        printf("돈까스를 먹는다.\n");
    }else if(money >= 5000){
        printf("짜장면을 먹는다.\n");
    }else if(money >= 2500){
        printf("라면을 먹는다.\n")
    }else{
        printf("굶는다.\n")
    }
}       // 중괄호 빼고 else if(money >= 5000)   printf("돈까스를 먹는다.") 처럼 적어도 됨.

void IsLeafYear(){
    int year;

    printf("연도 입력 : ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    printf("%d년은 윤년입니다.\n", year);
    else
    printf("%d년은 윤년이 아닙니다.\n", year);
} // if - else 활용한 윤년 계산산


int main()
{
    
    eatLunch();

    return 0;
}
