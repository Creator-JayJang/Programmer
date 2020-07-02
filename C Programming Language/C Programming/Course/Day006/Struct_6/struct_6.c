/*
   자동차의 정보를 담고있는 객체를 구조체화한 후 다음 주어진 기능이 동작하도록
   프로그램을 구현하시오.
   <처리조건>
   1. 자동차객체는 소유주이름, 현재연료, 현재속도를 멤버변수로 관리한다.
   2. 자동차의 가속과 감속시 연료와 속도의 변화를 출력하는 함수를 구현한다.
   3. 자동차의 최고속도는 200을 넘지 않고, 한 번 가속패달을 밟을 때 가속되는
      속도는 10, 사용되는 연료는 2씩 줄어든다고 가정한다.
   4. 기타 조건은 프로그램의 흐름에 맞게 구현한다.
*/

#include<stdio.h>

// 매크로 상수 정의
#define MAX_SPEED 200       // 자동차의 최고속도
#define STEP 2              // 소모되는 연료량
#define GAGE 10             // 가속 또는 감속시 증감하는 속도값

// 구조체 정의부
typedef struct Car {
    char name[20];          // 소유주 이름을 담는 변수
    int curSpeed;           // 현재 속도를 담는 변수
    int curGas;             // 현재 연료량을 담는 변수
}Car;

// 함수 선언부
void carExcel(Car* c);            // 엑셀패달을 밟았을 때의 상황
void carBreak(Car* c);            // 브레이크패달을 밟았을 때의 상황
void carDisp(Car* c);             // 자동차의 현재상태를 출력



int main() {
    // 구조체형 변수 선언
    Car tico = { "티코", 0, 100 };

    // 현재상태 출력
    carDisp(&tico);
    printf("\n");

    // 가속처리
    carExcel(&tico);
    carDisp(&tico);
    printf("\n");

    // 감속처리
    carBreak(&tico);
    carDisp(&tico);
    printf("\n");

    return 0;
}

// 함수 내용 정의부
void carDisp(Car* tico) {
    printf("소유자 : %s\n", tico->name);
    printf("현재속도 : %d\n", tico->curSpeed);
    printf("현재연료 : %d\n", tico->curGas);
}

void carExcel(Car* tico) {
    /*
      가속패달을 밟을 때 속도는 10씩 증가한다.
      가속패달을 밟을 때 연료는 2씩 줄어든다.
      최고속도 200을 넘을 수 없다.
    */

    if (tico->curGas >= STEP) { // 연료가 충분하다면....
        tico->curGas -= STEP;  // 연료감소
        if (tico->curSpeed + GAGE > 200) {
            tico->curSpeed = 200;
        }
        else {
            tico->curSpeed += GAGE; // tico.curSpeed = tico.curSpeed + 10
        }
    }
    // return; 
}

void carBreak(Car* tico) {
    /*
       속도가 10 준다.
       연료가 2 준다.
    */

    if (tico->curGas >= STEP) { // 연료가 충분하다면
        tico->curGas -= STEP;
        if (tico->curSpeed - GAGE < 0) {
            tico->curSpeed = 0;
        }
        else {
            tico->curSpeed -= GAGE;
        }
    }
}