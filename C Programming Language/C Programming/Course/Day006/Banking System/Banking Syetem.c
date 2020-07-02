/*
  은행 계좌관리 프로그램을 구현하시오.
  다음 주어진 입출력 형식에 맞게 동작되도록 프로그래밍 하시오.

  <입력 및 출력형식>
  ==== Bank Menu ====
  1. 계좌등록
  2. 입금처리
  3. 출금처리
  4. 전체고객 잔액조회
  5. 프로그램 종료
  ===================
  메뉴 =

  <처리조건>
  1. 계좌(Account)는 고객이름, 예금잔고, 계좌번호를 객체화하여 구조체로 정의한다.
  2. 계좌번호는 정수형으로 중복없이 입력받아 해당 계좌를 식별하는 용도로 사용한다.
  3. 입금처리는 해당 고객의 계좌를 식별한 후 고객의 잔고에 입력한 입금금액을 누적하여
     처리하되, 해당 계좌가 없거나 입금금액이 0보다 작을 경우 에러 메시지를 출력한다.
  4. 출금처리는 해당 고객의 계좌를 식별한 후 고객의 잔고에 입력한 출금금액을 차감하여
     처리하되, 계좌가 존재하지 않거나, 출금금액이 예금잔고보다 많으면 에러 메시지를
     출력한다.
  5. 전체고객의 예금현황을 출력할 수 있도록 프로그래밍 한다.
  6. 사용자가 원하는 작업을 수행할 수 있도록 프로그래밍 한다.
  7. 언제든지 프로그램은 종료될 수 있도록 구현한다.
  8. 배열을 활용하여 둘 이상의 고객을 입력받아 처리할 수 있도록 구현한다.

  ==== 입금처리 ====
  계좌번호 =
     or 입력한 계좌번호는 존재하지 않습니다.
  입금금액 =
     or 입금금액은 0보다 큰 값이 들어와야 합니다.
  =================
  입금처리가 완료되었습니다.
  현재 고객님 계좌잔액은 xxx원 입니다.

  ==== 출금처리 ====
  계좌번호 =
    or 입력한 계좌번호는 존재하지 않습니다.
  출금금액 =
    or 출금잔액이 부족합니다.
  =================
  출금처리가 완료되었습니다.
  현재 고객님 계좌잔액은 xxx원 입니다.

*/

#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

#define MAX 100             // 고객수 100명

//#define MAKE 1
//#define INPPUT 2
//#define OUTPUT 3
//#define SHOW 4
//#define EXIT 5

//enum MENU {MAKE=1, INPUT, OUTPUT, SHOW, EXIT};

typedef struct Account {
    char name[20];          // 고객이름
    int id;                 // 계좌번호
    int balance;            // 예금잔액
}Account;

// 전역변수
Account* accList;       // 객체수
int index = 0;              // 배열의 위치(고객수를 카운트)

// 함수선언부
void showMenu();            // 메뉴출력
void makeAccount();         // 계좌개설
void deposit();             // 입금처리
void withdraw();            // 출금처리
void showAccount();         // 전체고객의 잔액출력

int main() {
    // 선언문
    int menu;               // 처리할 메뉴를 저장할 변수

    // 열거형 선언문
    //enum MAKE m;
    accList = (Account*)malloc(sizeof(Account) * 100);

    if (accList == NULL) {
        printf("동적할당에 실패하였습니다.\n");
        return 0;
    }

    while (1) { // 무한Loop
        // 메뉴출력
        showMenu();
        printf("메뉴 = ");
        scanf("%d", &menu);

        // 사용자가 입력한 메뉴에 따른 처리를 위한 로직
        if (menu == 1) {  // 계좌개설을 위한 함수 호출
            makeAccount();
        }
        else if (menu == 2) { // 입금처리를 위한 함수 호출
            deposit();
        }
        else if (menu == 3) { // 출금처리를 위한 함수 호출
            withdraw();
        }
        else if (menu == 4) {
            showAccount();
        }
        else if (menu == 5) {
            for (int i = 0; i < MAX; i++)
                free(accList[i]);
            break;
        }
        else {
            printf("메뉴의 선택이 올바르지 않습니다.\n");
        }

        /*switch (m) {
        case MAKE:
        case INPUT:
        case OUTPUT:
        case SHOW:
        case EXIT:
        default:
        }*/

    }

    printf("프로그램을 종료합니다.\n");

    //free(accList);
    return 0;
}

// 함수 정의부
void showMenu() {
    printf("\n==== Bank Menu ====\n");
    printf("1. 계좌개설\n");
    printf("2. 입금처리\n");
    printf("3. 출금처리\n");
    printf("4. 전체고객 잔액현황\n");
    printf("5. 프로그램 종료\n");
    printf("======================\n");
}

void makeAccount() {         // 계좌개설
    /* 고객이름, 계좌번호, 예금금액을 받아서 처리한다.  */
    char curName[20];
    int id;
    int money;

    // 입력문 - 사용자에게 정보를 입력받는다.
    printf("\n==== 입금처리 ====\n");
    //while (1) {
    printf("계좌번호(xx) = ");
    scanf("%d", &id);

    //    for (int i = 0; i < MAX; i++) {
    //        if (accList[i].id != id) { // 동일한 계좌가 아니라면
    //            break;
    //        }
    //        //if()
    //    }
    //}
    printf("고객이름 = ");
    scanf("%s", curName);
    printf("예금금액 = ");
    scanf("%d", &money);

    // 처리문 - 입력받은 값을 구조체 배열에 저장한다.
    accList[index].id = id;
    //accList[0].name = curName; 문자열은 대입연산자(=)를 사용할 수 없다.
    strcpy(accList[index].name, curName);
    accList[index].balance = money;

    // 출력문
    printf("입금처리가 완료되었습니다.\n");
    printf("고객님의 현재 잔액은 %d 원 입니다.\n", accList[index].balance);
    index++; // 새로운 고객을 담을 방으로 이동한다.
}

void deposit() {             // 입금처리
    /*
       계좌번호를 확인한다.
       입금금액을 받고 해당 계좌의 잔액에 누적한다.
    */
    int id;
    int money;

    printf("\n==== 입금처리 ====\n");
    printf("계좌번호 = ");
    scanf("%d", &id);

    // 입력받은 계좌번호와 구조체 배열의 계좌번호가 일치하는지 확인
    for (int i = 0; i < index; i++) {
        if (accList[i].id == id) { // 해당 계좌번호가 존재한다면
            printf("입금금액 = ");
            scanf("%d", &money);
            accList[i].balance += money;

            printf("입금처리가 완료되었습니다.\n");
            printf("현재 고객님의 계좌의 잔액은 %d 원입니다.\n", accList[i].balance);
            return;
        }
        /*else {
            printf("계좌번호가 일치하지 않습니다.\n");
        }*/
    }
    printf("입력한 계좌번호가 일치하지 않습니다.\n");
}

void withdraw() {            // 출금처리
    /*
       1. 계좌번호를 입력받는다.
       2. 입력한 계좌번호가 구조체 배열에 존재하는지 파악
       3. 출금금액을 입력받아서 출금처리를 한다.
          단, 계좌의 잔액이 출금금액보다 작을 경우 잔고부족
    */
    int id;
    int money;

    printf("\n==== 출금처러 ====\n");
    printf("계좌번호 = ");
    scanf("%d", &id);

    //해당 계좌가 존재하는지 비교작업
    for (int i = 0; i < index; i++) {
        if (accList[i].id == id) { // 계좌가 존재한다면
            printf("출금금액 = ");
            scanf("%d", &money);

            if (accList[i].balance < money) {
                printf("잔액이 부족합니다.\n");
                printf("현재 고객님의 계좌잔액은 %d원 입니다.\n", accList[i].balance);
                return;
            }

            accList[i].balance -= money;
            printf("출금처리가 완료되었습니다.\n");
            printf("현재 고객님의 계좌잔액은 %d원 입니다.\n", accList[i].balance);
            return;
        }
    }

    printf("입력한 계좌번호가 일치하지 않습니다.\n");
}

void showAccount() {         // 전체고객의 잔액출력
    /* 등록된 고객의 수만큼 반복해서 출력하는 작업 */
    printf("\n==== 전체고객 잔액현황 ====\n");
    for (int i = 0; i < index; i++) {
        printf("%5d  %10s  %20d\n", accList[i].id, accList[i].name, accList[i].balance);
    }
}





