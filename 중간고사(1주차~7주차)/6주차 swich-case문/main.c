#include <stdio.h>

/** 

void printAddress(int addr){
    swich(addr){
        case 1:
            printf("서울거주, ");
            break;
        case 2:
            printf("경기거주, ");
            break;
        case 3:
            printf("충남거주, ");
            break;
    }
}

void printAge(int a){
    if(a < 10) printf("10대 미만, ");
    else if(a >= 10 && a < 20) printf("10대, ");
    else if (a >= 20 && a <30) printf("20대, ");
    else printf("30대 이상, ");
}

void printGender(int gen){
    swich(gen){
        case 1:
            printf("남자입니다.");
            break;
        case 2:
            printf("여자입니다.");
            break;
    }
}


int main()
{
    int address, gender, age;
    printf("거주지 ( 1 - 서울, 2 - 경기, 3 - 충남)와 나이, 성별( 1 - 남자, 2 - 여자)를 입력하세요.");
    scanf("%d %d %d", &address, &age, &gender);
    
    printAddress(address);
    printAge(age);
    printGender(gender);

    return 0;
}

**/         // add,gen,age

int calculater(int a, char op, int b){
    
    int result;
    switch(op){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            printf ("잘못된 연산자를 입력하였습니다.\n");
            return -1;
    }
    return result;
}       //switch문 안에는 정수 연산만 가능하지만 char도 결국 그 안에 들어가 있는 값은 정수이다.(아스키코드 정수로 저장됨.)

int main()
{
    int a, b, c;
    char op;
    
    printf("숫자 연산자 숫자 형식으로 입력하세요.\n");
    scanf("%d %c %d", &a , &op, &b);
    
    c = calculater(a, op, b);
    
    printf("%d %c %d의 결과값은 %d입니다.\n", a, op, b, c);
    
    return 0;
}