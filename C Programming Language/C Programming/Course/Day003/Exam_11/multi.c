/* 
	멀티 프로그램을 구현하시오.
	<입력 및 출력형식>

	=== 메뉴 ===
	1. 최대값
	2. 사이합
	3. 수나열
	4. 계산기
	5. 종 료

	============

	메뉴 = 

	<처리조건>
	1. 프로그램이 실행되면 메뉴가 화면에 출력되도록 구현한다.
	2. 주어진 메뉴의 번호를 입력하여 해당 프로그램이 동작되도록 구현한다.
	3. 최대값은 두 개의 정수를 입력받아 큰 수가 출력되도록 구현한다.
	4. 사이합은 두 개의 정수를 입력받아 두 정수사이의 자연수의 합을 계산하여 출력되도록 구현한다.
	5. 수나열은 세 개의 정수를 입력받아 큰 순서대로 나열하여 출력되도록 구현한다.
	6. 계산기는 두 개의 정수와 하나의 연산자를 입력받아 해당 연산의 계산을 수행하여 결과가 출력되도록 구현한다.
	7. 사용자가 종료를 선택하면 프로그램이 종료되도록 구현한다.



*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int menu;	// 사용자가 입력하는 메뉴값
	int su1, su2, res = 0;

	// 입력문

	// 처리문
	while (1) { // 무한 Loop
		printf("== MENU ==\n");
		printf("1. 최대값\n"); 
		printf("2. 사이합\n"); 
		printf("3. 수나열\n");
		printf("4. 계산기\n");
		printf("5. 종료\n");
		printf("=============\n");
		printf("메뉴 = ");
		scanf("%d", &menu);

		if (menu == 1) { // 최대값을 계산하는 로직
			// 선언문
			//int su1, su2, res;		// 지역변수

			// 입력문
			printf("수1 = ");
			scanf("%d", &su1);
			printf("수2 = ");
			scanf("%d", &su2);

			// 처리문
			if (su1 >= su2)
				res = su1;
			else
				res = su2;

			// 출력문
			printf("최대값 = %d\n\n", res);
		}
		else if (menu == 2) { // 사이합을 계산하는 로직
			// 선언문
			//int su1, su2, 
			res = 0;
			int i;			//반복을 처리할 제어변수
			int tmp;		//임시변수

			// 입력문
			printf("첫번째수 = ");
			scanf("%d", &su1); // 1

			printf("두번째수 = ");
			scanf("%d", &su2); // 10

			// 처리문
			if (su1 >= su2) {
				tmp = su1;
				su1 = su2;
				su2 = tmp;
			}

			for (i = su1; i <= su2; i++) {
				res += i;
			}

			// 출력문
			printf("사이합 = %d \n\n", res);

		}
	

		else if (menu == 3) { // 수나열을 계산하는 로직

			int main(); {
				
				// 선언문
				int first, second, third, max;

				// 입력문
				printf("첫번째 수 = ");
				scanf("%d", &first);
				printf("두번째 수 = ");
				scanf("%d", &second);
				printf("세번째 수 = ");
				scanf("%d", &third);

				// 처리문
				max = first > second ? first : second; // 첫번째와 두번째를 비교하여 큰수를 max에 담는다.
				max = max > third ? max : third; // max와 세번째수를 비교해서 큰 수를 max에 담는다.

				// 출력문
				printf("최대값 = %d\n", max);

				return 0;
			}
			// 선언문
			// 입력문
			// 처리문
			// 출력문
		}

		else if (menu == 4) { // 계산기를 계산하는 로직
				// 선언문
			res = 0;
			char op;

				// 입력문
				printf("첫번째 수 = ");
				scanf("%d", &su1);

				getchar(); //엔터를 걸러준다

				do {
					printf("연산자(+,-,*,/) = ");
					scanf("%c", &op);
					getchar();
				} while (op != '+' && op != '-' && op != '*' && op != '/');

				do {
					printf("두번째 수 = ");
					scanf("%d", &su2);
				} while (op == '/' && su2 == 0);

				// 처리문
				switch (op) {
				case '+': res = su1 + su2; break;
				case '-': res = su1 - su2; break;
				case '*': res = su1 * su2; break;
				case '/': res = su1 / su2; break;
				}


				// 출력문
				printf("%d %c %d = %d\n", su1, op, su2, res);

				return 0;
			}

		else if (menu == 5) { 
			printf("\n프로그램을 종료합니다. \n");
			return 0;
		}
		else {
			printf("메뉴의 선택이 올바르지 않습니다.\n");
		}
	}


	// 출력문

	return 0;
}