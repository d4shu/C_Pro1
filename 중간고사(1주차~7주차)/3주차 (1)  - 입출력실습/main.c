#include <stdio.h>

void_exec1() {
    int foo; //정수 하나를 foo 라는 공간에 입력하여 쓰겠다는 의미
    int boo; // int foo, boo 형식처럼 한 번에 해도 ㄱㄴ
    
    printf("input number foo and boo : ");
    
    scanf("%d%d", &foo, &boo); // %d는 10진수 형식의 정수형 , & - 주소값을 의미함.
    
    printf("%d %d", foo, boo);
}

void_exec2() {
    
    int foo, boo;
    
    printf("더할 두 정수값을 입력하시오 : ");
    
    scanf("%d%d", &foo, &boo);
    
    printf("%d + %d = %d",foo ,boo ,foo+boo);
}

int main(){
    
    void_exec2();
    return 0;
}
