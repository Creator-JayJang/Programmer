/*
	5명의 고객을 등록하여 입금 및 출금처리가 가능하도록 프로그램을 구현하시오.
	단, 등록할 고객의 정보는 배열에 저장하되, 고객 식별 id는 배열의 index를 이용할 것.

	int cust[5];
	cust[0],cust[1],cust[2],cust[3],cust[4]

	
*/

#include<stdio.h>
#pragma warning(disable:4996)

// 매크로 상수
#define MAX 5

// 함수 선언부
void menu();		// 메뉴 출력
void make(int balance[], int id);		// 계좌 개설
void input();		// 입금 처리
void output();		// 출금 처리
void show();		// 모든 고객의 계좌 출력

int main() {
	// 선언문
	int id, balance;
	int check;
	int cust[MAX] = {0};
	
	for (int i = 0; i <= MAX; i++) {	// 등록가능한 인원수에 맞추어 반복수행
		// 메뉴출력
		menu();

		// 사용자의 선택에 따른 작업을 위한 로직
		printf("menu = ");
		scanf("d", &check);

		if (check == 1) {
			make(cust, i);
		}
		else if (check == 2) {
		
		}
		else if (check == 3) {
		
		}
		else if (check == 4) {
			printf("전체 고객의 잔액정보 출력 \n");
			for (int a = 0; a < i; a++) {
				printf("%d 고객님 잔액 %d원 입니다. \n", a, cust[a]);
			}
			i--; // 고객을 등록한 것이 아니므로
		}
		else if (check == 5) {
			printf("프로그램을 종료합니다.\n");
				return 0;
		}
		else {
			printf("메뉴의 선택이 올바르지 않습니다. \n");
			i--;	// 고객을 등록한 것이 아니므로
		}

	
	}

	// 입력문

	// 처리문

	// 출력문

	return 0;
}

void menu() {
	printf("== <Bank Menu> == \n");
	printf("1. 계좌개설 \n");
	printf("2. 입금처리 \n");
	printf("3. 출금처리 \n");
	printf("4. 전체고객정보 \n");
	printf("5. 작업종료 \n");
	printf("================= \n");

}

void make(int balance[], int id) {// 계좌 개설
	/*
		지역변수는 지역을 벗어나면 의미가 소멸된다.

	*/

	printf("== 계좌개설 == \n");
	printf("계좌번호 = %d \n", id);
	printf("입금 금액 = ");
	scanf("%d", &balance[id]);
	printf("계좌개설이 완료되었습니다. \n");

}