#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define SIZE 100

void inputRandomArray(int* array, int size){    
    for(int i = 0; i < size; i++){
        *(array + i) = rand() % 100;
    }
}   // int * array -> int array[] 로 써도 됨 , *(array + i) -> array[i] 로 써도 됨 (모두 배열일 경우에만 ,swap 절대 안 됨)

void printArray(int* array, int size){
    for(int i = 0; i < SIZE; i++){
        printf("%3d\t",*(array+i));
        if((i+1) % 10 == 0) printf("\n");
    }
}

int main()
{
    int number[SIZE];
    
    srand(time(NULL));
    inputRandomArray(&number[0] , SIZE); //number로 써도 상관 없음
    printArray(number, SIZE);
    
    return 0;
}
