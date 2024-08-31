#include <stdio.h>

void MindnightSnack(){
    int choice = 0;
    int cont = 1;
    
    while(cont) {
        printf("오늘 야식 메뉴 뭐가 좋을지 골라줘.\n");
        printf("1. 곱창\n2. 치킨\n3. 피자\n");
        scanf("%d", &choice);
        
        if(choice < 1 || choice > 3){
            printf("1, 2, 3 중에서 선택해줘\n\n");
            continue;
        }
        
        switch(choice){
            case 1:
                printf("곱창 먹자!\n");
                break;
            case 2:
                printf("치킨 먹자!\n");
                break;
            case 3:
                printf("피자 먹자!\n");
                break;
        }
        
        break;
    }
}

void exec1(){
    int sum = 0;
    int input = 0;
    
    while(input > -1){
        scanf("%d", &input);
        sum += input;   // sum = sum + input
    }
    sum -= input; // 마지막에 더한값(sum += input; 을 보정해주기(돌려놓기) 위해)
    printf("sum = %d\n", sum);
}

void exec2(){
    int cont, input, sum;
    cont = 1;
    sum = input = 0;
    
    printf("더할 값을 입력하세요 : ");
    
    while(cont == 1){
        scanf("%d", &input);
        sum += input;
        printf("계속 더하겠습니까? ( 1 - yes , 0 - no) : ");
        scanf("%d", &cont);
        if(cont == 1) printf("더할 값을 입력하세요 : ");
    }
    printf("sum = %d\n", sum);
}

void DoWhile(){
    int menu;
    do{
        printf("메뉴를 입력하세요. : ");
        scanf("%d", &menu);
        if(menu != 1 && menu != 2) printf("1, 2중에 입력하세요.\n");
    }while(menu != 1 && menu != 2);
    
} //do-while 문


void PlusPlus(){
    int count = 1;
    int sum = 0;
    
    while(count <= 1000){
        sum += count;
        count++;
    }
    printf("1 ~ 100까지 합 : %d\n" , sum);
}

void exec3(){
    int start, end, temp;
    int sum = 0;
    scanf("%d %d", &start, &end);
    if(start > end){
        temp = end;
        end = start;
        start = temp;
    }
    while(start <= end){
        sum += start;
        start++;
    }
    printf("sum = %d\n", sum);
}

int main(){
   
    PlusPlus();
    
    return 0;
}




