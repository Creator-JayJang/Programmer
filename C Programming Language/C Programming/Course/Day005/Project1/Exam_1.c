/*
  1. 상수와 변수 그리고 자료형
  2. 연산자
  3. 제어문
  4. 함수
  5. 배열 => 1차원배열, 다차원배열(2차원배열, ....)
  6. 포인터 => 포인터 배열, 다차원배열과 포인터의 관계

  7. 구조체 & 공용체
     열거형, 이름형..

  8. 파일입출력

  9. 동적 할당

  배열(Array)
  - 동질의 자료형을 하나의 이름으로 묶어서 관리하는 자료구조
  - why?
    기억장소의 낭비를 줄이기 위해
    연속된 공간에 데이터가 저장되어 처리되므로 속도가 빨라진다.
    유사문구가 생성되어 코딩의 효율성을 높인다.(for 반복문)
    자료구조
    변수(Variable) : 기억장소, 메모리, 1개의 상수가 저장된다.
    배열
    포인터
    구조체

  - 1차원 배열 : 배열의 첨자를 하나만 가지고 있는 형태

  - 다차원 배열(2차원 배열) : 배열의 첨자를 하나 이상 가지고 있는 형태
*/

#include<stdio.h>

int main() {
    //int x, y, z;  // 이름만 담는 reference 영역이 12byte 크기이다.
    //int y;
    //int z;
    //char a, b, c;
    int data[3];

    //x = 10; 
    data[0] = 10;
    //y = 20; 
    data[1] = 20;
    //z = 30; 
    data[2] = 30;

    // printf("x = %d\n", x);
    // printf("y = %d\n", y);
    // printf("z = %d\n", z);

     /*printf("data[0] = %d\n", data[0]);
     printf("data[1] = %d\n", data[1]);
     printf("data[2] = %d\n", data[2]);*/
    for (int i = 0; i < 3; i++) {
        printf("data[%d] = %d\n", i, data[i]);
    }

    return 0;
}