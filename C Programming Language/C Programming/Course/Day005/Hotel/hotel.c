/*
   숙박관리프로그램

   투숙객을 관리할 목적으로 프로그램을 구현하시오.
   주어진 입출력 형식에 맞게 구현할 것.

   <입력 및 출력형식>
        ==== 숙박관리 프로그램 ====
   1.투숙  2.퇴실  3.객실현황  4.작업종료
   ---------------------------------------
   메뉴 = 1

   투숙할 방번호 =
   투숙객 이름 =

   <처리조건>
   1. 투숙객을 관리하는 자료구조는 배열을 사용한다.
   2. 배열의 인덱스는 방번호로 간주한다.
   3. 투숙객 이름은 식별 문자를 사용한다.
   4. 투숙과 퇴실시 방번호는 존재하지 않거나 고객의 존재유무에 따라
      프로그램을 동작시킨다.
   5. 사용자가 원하는 작업을 수행할 수 있도록 구현한다.
   6. 객실현황은 현재 객실에 대한 정보를 출력한다.
*/

#include<stdio.h>
#pragma warning(disable:4996)
#define ROOM 5

int main() {
    // 선언문
    char names[ROOM] = { 0 }; // 5개의 방이 존재하고 방은 0으로 초기화된 상태
    int menu, index;
    char name;

    while (1) { // 무한Loop
        // 메뉴출력
        printf("\n\t==== 숙박관리 프로그램 ====\n");
        printf("1.투숙  2.퇴실  3.객실현황  4.종료\n");
        printf("----------------------------------\n");
        printf("menu = ");
        scanf("%d", &menu);

        switch (menu) {
        case 1: // 투숙
        {
            do {
                printf("투숙할 방번호 = ");
                scanf("%d", &index);
            } while (index < 0 || index >= ROOM || names[index] != 0);
            getchar();
            printf("투숙객 이름 = ");
            scanf("%c", &names[index]);
            break;
        }
        case 2: // 퇴실
        {
            do {
                printf("퇴실할 방번호 = ");
                scanf("%d", &index);
            } while (index < 0 || index >= ROOM || names[index] == 0);
            getchar();
            names[index] = 0;
            break;
        }
        case 3: // 객실현황보기
        {
            for (int i = 0; i < ROOM; i++) {
                printf("%d번방 투숙객 %c\n", i, names[i]);
            }
            break;
        }
        case 4: // 작업종료
        {
            printf("프로그램을 종료합니다.\n");
            return 0;
        }
        default:
            printf("메뉴의 선택이 올바르지 않습니다.\n");
        }

    }

    return 0;
}