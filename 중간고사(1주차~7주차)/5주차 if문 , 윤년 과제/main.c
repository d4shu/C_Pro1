#include <stdio.h>

void eatLunch(void){
    int money = 0;
    printf("돈이 있나요? ( 1 - Yes , 2 - No) : ");
    scanf("%d", &money);
    if(money == 1){
        printf("점심식사를 한다\n");
    }   
    if(money == 2){
        printf("굶는다.\n");
    }
}

void score(void){
    
    int math, eng;
    printf("수학점수와 영어점수를 입력하세요. : ");
    scanf("%d %d", &math, &eng);
    if(math >= 80 && eng >= 80){
        printf("갈비찜을 먹는다.");
}

}


// 윤년 과제
void IsLeafYear(){
    int year,cal;
    printf("연도 입력: ");
    scanf("%d", &year);

    cal = ((year%4 == 0 && year%100 != 0) || year %400 ==0);
    printf("%d" , cal);

    
} // 결과값 1, 0 으로 나오는 형식


int main()
{
    
    score();

    return 0;
}

