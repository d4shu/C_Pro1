#include <stdio.h>

// int* -> int pointer -> 주소값을 담는 변수. 즉 int* a 에 들어갈 값은 주소값. swap 함수가 달라는 값은 주소값..
// int* a -> int 형의 주소값을 저장하는 변수 a.

void exec1(){
    
    int i = 10;
    int *p;
    p = &i;
    
    printf("i = %d\n", i);
    printf("adress of i = %p\n", p); // 주소값을 보는 형식 -> %p, 결과값 -> onlinegdb에서 이 프로그램을 짰을 떄의 번지수.
    printf("*p = %d\n", *p);
 
}

void max_min_Number(int a, int b, int c, int d, int* max, int* min){
    
    int temp;
    temp = a;
    if(b > temp) temp = b;
    if(c > temp) temp = c;
    if(d > temp) temp = d;
    *max = temp; // 포인터 붙여서 그 주소로 가는 것 -> 간접참조연산
    
    temp = a;
    if(b < temp) temp = b;
    if(c < temp) temp = c;
    if(d < temp) temp = d;
    *min = temp;
    
}

int main()
{
    int num1, num2, num3, num4;
    
    int max, min;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    max_min_Number(num1, num2, num3, num4, &max, &min);
    printf("%d %d", max, min);
    
    return 0;
}
