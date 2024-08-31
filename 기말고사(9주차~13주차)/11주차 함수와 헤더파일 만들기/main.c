#include <stdio.h>
#include "myheader.h"       //<>은 시스템 라이브러리 함수에서 , ""은 현재 내가 코딩하고 있는 프로젝트 안에 있는 파일에서 찾아서 씀.


void main(void){
    printf("circum = %lf\n", circum(5.4));
    printf(" 100cm는 %f 인치 입니다.", cm_to_inch(100));
}