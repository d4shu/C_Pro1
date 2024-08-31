#include <stdio.h>

void exec1(){
        int width, height;      // 사각형 변의 길이정보
    int num1, num2;         // 숫자 두 개 입력
    int sum = 0;
    int area = 0;
    
    scanf("%d %d", &width, &height);
    scanf("%d %d", &num1, &num2);
    
    area = width * height;
    sum = num1 + num2;
    
    printf("area of rectangle : %d\n", area);
    printf("%d + %d = %d\n", num1, num2, sum);
}

void exec2(){
    float r;
    float circum;
    printf("input radius : ");
    scanf("%f", &r);
    circum = 2 * 3.14 * r;
    printf("circumference of circle : %6.2f", circum);      // %6.2f? : 6자리 포멧으로 찍는 대신 소수점은 두자리만 찍는다.
}




int main()
{
    exec2();
    return 0;
}
