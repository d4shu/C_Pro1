#include<stdio.h>
#include<math.h>
#define _USE_MATH_DEFINES

void exec1(){
    
    double n, r, result;
    scanf("%lf %lf", &n, &r);        // double형 -> lf long float
    result = pow(n,r);
    printf("%lf의 %lf승은 %lf입니다.\n",n , r, result);
    
}   //pow - > x^y

void exec2(){
    
    double a, result;
    a = 34.6 ;
    //result = sqrt(a);
    printf("%lf의 루트값은%lf입니다.",a, sqrt(a));
    
}   //sqrt -> 루트값 

void exec3(){
    
    double a, result;
    a = 34.6 ;
    printf("%lf의 루트값은%lf입니다.\n",a, sqrt(a));
    printf("%lf의 올림값은%lf입니다.\n",a, ceil(a));
    printf("%lf의 내림값은%lf입니다.\n",a, floor(a));
    
} // 루트값, 올림값, 내림값

void exec4(){
    
    printf("4 나머지 2는 %d입니다.\n", 4 % 2);
    printf("4.0나머지 2.0은 %lf입니다.", fmod(4.0, 2.0));

}   //fmod(x, y) -> x를 y로 나눈 나머지

void exec5(){
    printf("자연상수 e의 4승은 %lf 입니다.\n", exp(4));
    printf("밑이 10인 로그 100의 값은 %lf 입니다.\n", log10(100));
} //exp(x) -> e^x   ,   log10(x) -> log10 x를 구한다








int main()
{
    printf("sin 30은 %lf 입니다.\n", sin(30*(M_PI/180)));   
    //math.h 헤더에 #define M_PI는 3.141592... 소수점 20자리 정도 실수로 정의되어 있음
    //각도법 - 1도에서 360도 형식으로 각을 표현하는 것 -> 각도법(Defree)
    //호도법 - 원호의 길이가 반지름의 길이와 같을 때 중심각의 크기 -> 1rad(Radian)
    return 0;
}
