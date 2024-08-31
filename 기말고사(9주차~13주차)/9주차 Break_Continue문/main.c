#include <stdio.h>

void exec1(){
    int sum = 0;
    int input = 0;
    while(1){
        scanf("%d", &input);
        if(input == -1)  break;
        if(input % 2 != 0) continue;    // 짝수가 아닌 수들은 continue로 인해 처음으로 돌아가 sum += input 수행 안 됨.
        if(input % 10 == 0) continue;   // 짝수들 중에서도 10의 배수인 것들은 continue로 인해 처음으로...
        sum+= input;
    }
    printf("sum = %d\n", sum);
}


int main()
{
    exec1();

    return 0;
}
