/**
 int a[?] -> a라는 이름으로 정수 ? 개를 사용하겠다.
 a[0] = 100 -> a[0]에 100을 집어넣는다.
 b = a[0] -> b에 a[0]에 있는 값을 집어넣는다.
 &a[0] -> a[0] 의 주소
 &i -> i의 주소
 **/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void exec1(){
    
    int a[10];
    float result;
    
    for(int i = 0 ; i < 10; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 10;i++){
        result += a[i];
    }
    result /= 10.0;  // result를 3으로 나누어 result에 다시 넣는다.
    
    printf("%f", result);
    
}   // 기본 실습

void exec2(){
    
    int number[10];
    
    srand(time(NULL));
    
    for(int i = 0; i < 10; i++){
        number[i] = (rand() % 100) + 1; //rand()만 입력하면 수가 너무 크기 떄문에 100으로 나눔. 100으로만 나누면 0~99까지만 나오기에 +1.
    }
    
    for(int i = 0; i < 10; i++){
        printf("number = %d\n", number[i]);
    }
    
}   // 난수 생성

void exec3_1(){
    int number[SIZE];
    int total = 0;
    int max, min;
    float avg = 0.0;
    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        number[i] = (rand() % 100) + 1;
    }
    for(int i = 0; i < SIZE; i++){
        total += number[i];
    }
    
    for(int i = 0 ; i < SIZE; i++){
        printf("%3d\t", number[i]);
        if((i+1) % 10 == 0) printf("\n");
    }
    avg = (float)total / SIZE;  // 형 변환 -> total은 정수인데, 앞에(float)을 붙임으로써 실수 취급을 하도록 함.
    
    max = number[0];
    min = number[0];
    
    for(int i = 1 ; i < SIZE; i++){
        if(max < number[i]) max = number[i];
        if(min > number[i]) min = number[i];
    }
    printf("avg = %f, max = %d, min = %d", avg, max, min);
} // 영상( 평균갑 , 최대,최소 구하기)

void exec3_2(){
    int number[SIZE];
    int total = 0;
    int max, min;
    int maxIndex, minIndex;
    float avg = 0.0;
    
    srand(time(NULL));
    for(int i=0; i<SIZE; i++){
        number[i] = (rand() % 100) + 1;
    }
    for(int i=0; i<SIZE; i++){
        printf("%3d\t", number[i]);
        if((i+1) % 10 == 0) printf("\n");
    }
    for(int i=0; i<SIZE; i++){
        total += number[i];
    }
    avg = (float)total / SIZE;
    
    max = number[0];
    min = number[0];
    maxIndex = 0;
    minIndex = 0;
    for(int i=1; i<SIZE; i++){
        if(max < number[i]) {
            max = number[i];
            maxIndex = i;
        }
        if(min > number[i]) {
            min = number[i];
            minIndex = i;
        }
    }
    printf("avg = %f, max = %d (index %d), min = %d (index %d)\n", 
           avg, max, maxIndex, min, minIndex);
} // 과제

void exec4(){
    
    int number[SIZE] = {0}; // int i =0 과 같이 0으로 초기화
    int most;
    int temp;
    srand(time(NULL));
    
    for(int i = 0; i < SIZE; i++){
        number[i] = (rand() % 10000) + 1;
    }
    
    for(int i = 0; i < SIZE-1; i++){
        most = i;
        for(int j; j < SIZE; j++){
            if(number[most] < number[j]) most = j;
        }
    temp = number[i];
    number[i] = number[most];
    number[most] = temp;
    }
    
    
    for(int i = 0; i < SIZE; i++){
        printf("%3d\t", number[i]);
        if((i+1) % 10 ==0 ) printf("\n");
    }
    
    
}   // 선택 정렬 (select bubble)


int main()
{
    exec4();
    
    return 0;
}
