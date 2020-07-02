/*
   예금처리를 수행하는 프로그램
   <입력 및 출력형식>

   == Bank Menu ==
   1. 고객등록
   2. 입금처리
   3. 출금처리
   4. 잔액현황
   5. 작업종료
   ================
   메뉴 =

   == 고객등록 ==
   id = xxx
   money = 10000
   ==============
   xxx 고객님 계좌가 등록되었습니다.

   == 입금처리 ==
   id =
   moeny = 1000
   ==============


*/


#include<stdio.h>
#pragma warning(disable:4996)

// 함수 선언부
//void makeAccount(); // 계좌개설
void input(int* id, int* balance);       // 입금처리
void output(int* id, int* balance);      // 출금처리
void show(int* id, int* balance);        // 잔액보기
int disp();         // 메뉴출력

int main() {
    // 선언문
    int id, money;  // 고객번호와 금액
    int menu = 0;       // 선택한 메뉴를 저장하기 위한 변수

    // 무한 Loop
    while (menu != 5) {
        // 화면출력
        menu = disp();

        // 선택된 메뉴에 따른 작업을 수행하는 로직
        if (menu == 1) {
            // 계좌등록
            printf("id = ");
            scanf("%d", &id);
            printf("money = ");
            scanf("%d", &money);

            printf("%d 고객님 계좌가 등록되었습니다.\n", id);
        }

        else if (menu == 2) {
            // 입금처리
            input(&id, &money);
        }
        else if (menu == 3) {
            // 출금처리
            output(&id, &money);
        }
        else if (menu == 4) {
            // 잔액보기
           show(&id, &money);
        }
        else if (menu == 5) {
            printf("프로그램을 종료합니다.\n");
            return 0;
        }
        else {
            printf("메뉴의 선택이 올바르지 않습니다.\n");
        }

    } // while문의 끝

    return 0;
}

// 함수 정의부

int disp() {
    int menu;
    printf("== Bank Menu ==\n");
    printf("1. 고객등록\n");
    printf("2. 입금처리\n");
    printf("3. 출금처리\n");
    printf("4. 잔액현황\n");
    printf("5. 작업종료\n");
    printf("================\n");
    printf("menu = ");
    scanf("%d", &menu);
    return menu;
}

void input(int* id, int* balance) {  // 입금처리
    /*
        1. id 일치여부를 판단.
            //등록된 id
        2. 기존 고객의 계좌잔액을 읽어온다.
    */
    int sid; // 입력받을 id
    int money;  // 입금받을 입금금액

    printf("==== 입금처리 ==== \n");
    printf("id = ");
    scanf("%d", &sid);

    // id 일치여부 판단
    if (*id == sid) { // id가 일치한다면
        do {
            printf("입금금액 = ");
            scanf("%d", &money);
        } while (money < 0);
        // 계좌의 잔액에 입력받은 금액을 누적한다.
        *balance += money;

        printf("입금처리가 완료되었습니다. \n");
    }
    else {
        printf("등록된 계좌가 존재하지 않습니다. \n");
    }
}

void output(int* id, int* balance) { // 출금처리
    /*
        id의 일치여부
        출금금액 > 0, 예금잔액 내에 포함
   */

    int sid;
    int money;

    printf("== 출금처리 == \n");
    printf("id = ");
    scanf("%d", &sid);

    // 해당 id가 존재하는지 파악한 후 다음 로직을 구현한다.
    if (sid == *id) {
        do {
            printf("출금금액 = ");
            scanf("%d", &money);
        } while (money < 0);

        if (*balance < money) { // 출금금액이 잔액보다 큰 경우
            printf("잔액이 부족합니다. \n");
        
        }
        else {
            *balance -= money;
            printf("출금처리가 완료되었습니다. \n");

        }

    }

}

void show(int* id, int* balance) {
    /*
        id가 일치하는지를 판단하고 수행한다.
    */

    int sid;

    printf("== 잔액보기 ==\n");
    printf("id =\n");
    scanf("%d", &sid);

    if (*id == sid) {
        printf("고객님의 잔액은 %d원 입니다. \n", *balance);
    }
    else {
        printf("일치하는 계좌가 존재하지 않습니다. \n");
    }
    }