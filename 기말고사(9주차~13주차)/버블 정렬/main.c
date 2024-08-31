/*******
 버블 소트(Bubble Sort)는 간단한 정렬 알고리즘 중 하나로, 리스트를 반복적으로 순회하며 인접한 요소들을 비교하고, 필요에 따라 교환하여 정렬하는 방식입니다. 이 알고리즘은 데이터가 거의 정렬되어 있는 경우에는 빠르게 동작할 수 있지만, 일반적으로 효율성이 떨어져 큰 데이터 세트에는 적합하지 않습니다.

버블 소트의 작동 원리를 설명하자면 다음과 같습니다:

리스트의 처음부터 끝까지 인접한 두 요소를 비교합니다.
만약 앞의 요소가 뒤의 요소보다 크다면, 두 요소를 교환합니다.
리스트의 끝까지 이 과정을 반복합니다. 한 번의 전체 반복이 끝나면 가장 큰 요소가 리스트의 끝에 위치하게 됩니다.
위의 과정을 리스트의 크기만큼 반복하며, 각 반복마다 비교 및 교환할 범위가 하나씩 줄어듭니다.
*******/

#include <stdio.h>
#define SIZE 5

void bubbleSort(int number[]) {
    int i, j, temp;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE-i-1; j++) {
            if (number[j] > number[j + 1]) {
                
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
}

int main() {
    int number[SIZE] = {10, 8, 1, 3, 5};
    int i;

    printf("정렬 전 : ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");


    bubbleSort(number);

    printf("정렬 후 : ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}   // 주어진 버블 소트 코드를 내림차순 정렬로 바꾸려면, 비교 조건을 반대로 바꾸면 됩니다. 
                   //즉, if (number[j] > number[j + 1]) 부분을 if (number[j] < number[j + 1])로 변경하면 됩니다.

