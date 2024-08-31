#include <stdio.h>

// 4주차 수의 체계
void exec1(){
    char ch;
    scanf("%c", &ch);
    printf("%c의 아스키코드 값은 10진수 %d, 16진수 %x", ch, ch, ch); // 16진수는 %x
}

void exec2(){
    char ch = 0;
    ch = 0;
    printf("%c --> dec : %d, hex : %x\n", ch, ch, ch);
    ch = 255;
    printf("%c --> dec : %d, hex : %x\n", ch, ch, ch); 
    /**C 언어에서 char 타입은 기본적으로 부호가 있는(signed) 타입으로 간주된다. 부호 있는 char는 -128부터 127까지의 값을 가질 수 있다.
    255는 부호 있는 char 범위를 초과하기 때문에 255는 8비트로 표현할 때 11111111로 표시되며, 이는 2의 보수 표현에서 -1로 해석됩니다.**/
}

void exec3(){
    float d = 213100000000000000.0f;    
    double a = 213100000000000000.0;        //더블형일 때에는 정수 뒤에 .0
    
    printf("%f\n", d);    
    printf("%.20lf", a);        //  %.20f -> 소수점을 20자리 까지 찍어라.
}

int main()
{
    exec3();
    return 0;
}

