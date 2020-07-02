/*
   다음 주어진 입출력 형식에 맞게 동작하는 프로그램을 구현하시오.

   <입력 및 출력형식>
   == Main Menu ==
   1. 최대값구하기
   2. 사이합구하기
   3. 수나열구하기
   4. 계산기구하기
   5. 프로그램 종료
   ===============
   menu = 

   <처리조건>
   1. 사용자가 원하는 작업을 수행할 수 있도록 구현한다.
   2. 최대값은 두 개의 정수를 입력받아 큰 수가 출력되도록 구현한다.
   3. 사이합은 두 개의 정수를 입력받아 두 수 사이의 자연수들의 합을 계산하여 출력되도록 구현한다.
   4. 수나열은 세 개의 정수를 입력받아 큰 순서대로 나열하여 출력되도록 구현한다.
   5. 계산기는 두 개의 정수와 하나의 연산자를 입력받아 계산을 수행한 후 결과가 출력되도록 구현한다.
   6. 언제든지 프로그램을 종료할 수 있도록 구현한다.
   7. 기타 조건은 프로그램의 흐름에 맞게 구현한다.
   8. 각 로직(1~4)은 별도의 함수로 구현한다.

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    // 선언문
    int first, second, third;   // 입력받을 값을 담는 변수
    char op;                    // 연산자
    int res;                    // 결과값
    int menu;                   // 메뉴

    // 처리문
    while (1) { // 무한Loop
        // 메뉴출력
        printf("== Main Menu ==\n");
        printf("1. 최대값구하기\n");
        printf("2. 사이합구하기\n");
        printf("3. 수나열구하기\n");
        printf("4. 계산기구하기\n");
        printf("5. 프로그램종료\n");
        printf("메뉴 = ");
        scanf("%d", &menu);

        if (menu == 1) {
            printf("첫번째수 = ");
            scanf("%d", &first);
            printf("두번째수 = ");
            scanf("%d", &second);

            if (first > second)
                printf("\n최대값 = %d\n", first);
            else
                printf("\n최대값 = %d\n", second);
        }
        else if (menu == 2) {
            printf("첫번째수 = ");
            scanf("%d", &first);
            printf("두번째수 = ");
            scanf("%d", &second);

            if (first > second) {
                int tmp = first;
                first = second;
                second = tmp;
            }

            res = 0;
            for (int i = first; i <= second; i++) {
                res += i;
            }

            printf("\n사이합 = %d\n", res);
        }
        else if (menu == 3) {
        
        }
        else if (menu == 4) {}
        else if (menu == 5) {
            break;
        }
        else {
            printf("\n메뉴의 선택이 올바르지 않습니다.\n");
        }
    }

    printf("\n시스템을 종료합니다.\n");
    return 0;
