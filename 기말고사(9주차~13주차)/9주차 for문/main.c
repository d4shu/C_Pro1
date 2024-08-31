/**
 for문 -> for( 초기식 ; 조건식 ; 증감식 ){
     실행문1;
     .....
 }

초기식 : 반복 전 최초 1회 수행 -> 조건식 : 반복 전 조건 검사(조건 참이면 실행문 수행) -> for문 안의 내용 수행 -> 증감식 : 다음 반복 전 증감식 수행 
    즉, 초기식 -> 조건식  ->  Yes -> 증감식 
                              No(다 끝나게 되면) -> for문 빠져나감    
**/ 

#include <stdio.h>


void exec1(){
    int start, end, temp;
    int sum = 0;
    scanf("%d %d", &start, &end);
    if(start > end){
        temp = end;
        end = start;
        start = temp;
    }
    for(int i = start; i <= end; i++){
        sum += i;
    }
    /** 
    while(start <= end){
        sum += i;
        start++;
    }
    **/         //위 부분 원래 모습 (while을 for문으로 변환한 것.)
    printf("sum = %d\n", sum);

} // while to for

int factorial(int num){
    
    int facto = 1;
    for(int i = num; i >= 1; i--){
        facto *= i;
    }
    return facto;
}

int combination(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}


int main()
{
    int n, r;
    int combi;
    scanf("%d %d", &n, &r);
    combi = combination(n, r);
    printf("%d", combi);
    return 0;
}


