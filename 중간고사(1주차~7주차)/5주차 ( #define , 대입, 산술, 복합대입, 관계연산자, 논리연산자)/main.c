#include <stdio.h>
#define PI 3.141592 // # -> 전처리기한테 하는 명령어 (전처리 단계) , define (정의하다) PI 3.14-> PI를 3.14로 바꾼다(정의한다).
#define MAX 1000

float circle_area(float r){
    return PI * r * r;
}


int main()
{
    printf("%f", circle_area(MAX));

    return 0;
}


/***********************************************************************************************************************************************************
                                                    연산자(Operator) <- 명령어
                                        1.대입 연산자 -> a=b -> b의 값을 a에 대입한다.
                                        2.산술 연산자 -> a+b -> a와 b를 더한다.
                                        3.관계 연산자 -> a<b -> b가 a보다 크다.
                                        4.논리 연산자 -> a&&b -> a와 b가 참(true)이다.
 ************************************************************************************************************************************************************/
 
 /**
  1. 대입 연산자 -> 저장공간(변수) = 변수, 상수 또는 수식 ( 변수,상수 또는 수식을 저장공간(변수)에 대입.) 
        모든 연산자 중 우선순위 가장 낮음(맨 마지막에 수행)
  
  ex) int main(){
      
      int result = 0;
      int foo = 100;
      result = 10; (10을 result에 넣는다.)
      result = foo(foo 안의 숫자를 result에 넣는다(기존 데이터 삭제)  
      result = foo * 10 + 3(오른쪽 수식의 결과를 result에 넣는다)
      
      return 0;
  }
  
  
  2. 산술 연산자 -> +, - , * , / , %(나머지)
  우선순위가 같을 경우 -> 순서대로
  우선순위가 다른 경우 -> 덧셈, 뻴셈보다 곱셈, 나눗셈을 먼저 한다.
  순위를 첫 번째로 끌어올리고 싶을 때 -> () 괄호 사용
  
  -나눗셈 시 주의 사항
  ex) result= 4 / 3 * PI * r * r * r;
   4 / 3 -> 결괏값 : 1 나옴 (정수 / 정수 = 정수 이기 때문) 
   해결책 -> 실수 / 실수로 사용 ex) 4 / 3 -> 4.0 / 3.0
   
   -나머지(%) 연산
   3의 배수인지 아닌지 판단하려면? -> 3으로 나눈 나머지가 몇인가?
   ex) result = a % 3; (어떤 수 a 안에 들어가 있는 값을 3으로 나누면 몇이 나오는가?)
        ★  정수만 가능!
    
    ? - 복합대입연산자
        int foo = 0;
        foo = foo + 100; (foo와 100을 더해 다시 foo에 집어 넣는다.)
        -> foo += 100; 처럼 활용
        
        cheak
        
        foo = foo + 100;    ->  foo += 100;
        foo = foo - 100;    ->  foo -= 100;
        foo = foo * 100;    ->  foo *= 100;
        foo = foo / 100;    -> foo /= 100;
        foo = foo % 100;    ->  foo%= 100;
    
    ?? - 증감연산자
    -> 한 변수의 값을 1 증가하거나 감소시키고 싶을 때
    
    foo + 1; (foo 값 1 증가) -> foo ++; (or) ++ foo; 
    foo - 1; (foo 값 1 감소) -> foo --; (or) -- foo;

    ex) foo = 100;
        i = foo ++;
        (++ 이 뒤에 있는 경우 -> i에 100이 먼저 들어간 다음에 foo 값 증가 됨.-> i 값 = 100 , foo 값 101)
        
        foo = 100;
        i = ++ foo;
        (++ 앞에 있는 경우 -> foo 값이 먼저 증가되기 때문에 i에 101이 들어감.)
    
    ??? - sizeof() 연산자
    -> 변수의 크기(byte 단위)를 알고 싶을때 사용하는 연산자.
    
    sizeof() -> ()가 있다고 해서 함수가 아니다. -> ()안의 변수의 크기를 알고 싶을 때 사용
    
    ex)
        int main(){
            int foo = 0;
            int i;
            
            i = sizeof(foo);
            printf("size of foo : %d\n", i);
        }

                    결과 -> size of foo : 4

    3 - 관계 연산자
    -> 크기 비교
    
        a 와 b와의 관계
        
        a < b (a가 b보다 작다.)
        a > b (a가 b보다 크다.)
        a <= b (a가 b보다 작거나 같다.)
        a >= b (a가 b 보다 크거나 같다.)
        a == b ( 같다.)
        a != b ( 같지 않다. )
                    수식이 맞을 경우 -> 1 , 맞지 않을 경우 -> 0 

    4 - 논리 연산자
    -> 참과 거짓이 서로 만났을 때 결과값을 해석하는 것 ( 관계연산자와 함께 쓰이는 경우가 대부분)
    
        %% - and 연산자 (그리고)
        || - or 연산자 (또는)
        ^ - xor (Exclusive or) - 서로 다를 때 참참
        ! - not (참을 거짓으로, 거짓을 참으로 바꿔주는 연산자(단항 연산자, 피연산자 1개 - !a -> a가 0이면 1, 1이면 0))

            ex)
            
            #include <stdio.h>
            #define MIN_SCORE 80
            int main(){
                int eng, math;
                int result = 0;
                scanf("%d %d", &eng, &math);
                
                result = (eng >= 80) %% or || or ^ (math >= 80);
                printf("result : %d", result);
                
                return 0;
            }


  
  **/
