#include <stdio.h>
void PrintStar(int count){
    for(int i=0; i<count;i++)       printf("*");
}
int power(int n, int r){
    int result = 1;
    for(int i=0;i<r;i++){
        result *= n;
    }
    return result;
}
int fibonacci(int n){
    int f1, f2, fn;
    f1 = f2 = 1;
    if(n == 1 || n == 2) return 1;
    for(int i = 3; i<=n; i++){
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}

void exec1(){
    int line;
    int space; 
    printf("몇 줄까지 출력할까? : ");
    scanf("%d", &line);
    for(int i=0;i<line;i++){
        for(int space=0; space<line-i-1; space++) printf(" ");
        PrintStar(2*i+1);
        printf("\n");
    }
} // 삼각형 출력
void exec2(){
    int n, r, x;
    printf("몇의 몇 승? : ");
    scanf("%d %d", &n,  &r);
    x = power(n, r);
    printf("%d\n", x);
} // 제곱근 구하기  ->  x = n^r
void exec3(){
    int n, number;
    scanf("%d", &n);
    number = fibonacci(n);
    printf("%d\n", number);
    
} // 피보나치 수열

int selectMenu(){
    int menu;
    printf("=====select menu=====\n");
    printf("1. 삼각형 출력하기\n");
    printf("2. 제곱근 구하기\n");
    printf("3. 피보나치 수열\n");
    printf("-1. exit\n");
    printf("input menu : ");
    
    scanf("%d" , &menu);
    return menu;

}
int main()
{
    int menu;
    while(1){
        menu = selectMenu();
        switch(menu){
            case 1:
                printf("'삼각형 출력하기'를 실행하였습니다\n");
                exec1();
                break;
            case 2:
                printf("'제곱근 구하기'를 실행하였습니다\n");
                exec2();
                break;
            case 3:
                printf("'피보나치 수열'을 실행하였습니다\n");
                exec3();
                break;
            case -1:
                printf("실행을 종료합니다.\n");
                break;
            
        }
        if(menu == -1) break;
    }
    return 0;
}
