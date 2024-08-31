#include <stdio.h>
/** 새로 만든 함수를 맨 위에 하는 이유? : 프로그램은 main 함수부터 시작하는건 같음. 모든 함수는 사용(호출)하기 전에 컴파일러에게 그 사용법을 알려주어야 한다.
컴파일러가 함수 정보를 알기 전에 그 함수를 사용하면 컴파일러는 그 함수가 제대로 사용 되었는지 알 수가 없기 때문에 warning 문구가 떠버린다.
컴파일러가 헤더 정보를 읽으면 그 함수의 사용법을 알 수 있게 된다( 매개변수, 함수이름, 반환값 형식).
따라서, 함수가 호출될 때, 위에 작성한 헤더정보를 보고 사용법을 체크하게 되기 때문에 맨 위에서 사용하는 것.**/


void print(void) // 매개변수와 반환값이 없는 함수
{
    printf("Hello World");
}

void printNum(int foo) // 매개변수는 있고 반환값이 없는 함수
{
    printf("%d", foo);
}

int add(int foo, int boo) // 매개변수와 반환값이 있는 함수
{
    return foo+boo;
}

int main()
{
    print();
    printf("\n");
    printNum(20);
    //함수를 수행하고 돌아오면 add 함수가 리턴한 값;
    printf("\n%d", add(30, 50));
    return 0;
}
