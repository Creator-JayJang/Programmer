#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

#include"Student.h"
#include"process.h"

int main() {
	int menu;

	while (1) {
		// 메뉴출력
		mainMenu();
		printf("menu = ");
		scanf("%d", &menu);

		switch (menu) {
		case 1: // 학생등록
			addStudent();
			break;
		case 2: // 학생검색
			findStudent();
			break;
		case 3: // 전체출력
			showAllStudent();
			break;
		case 4: // 정보수정
		case 5: // 작업종료
			printf("프로그램을 종료합니다.\n");
			return 0;
		default: printf("메뉴의 선택이 올바르지 않습니다.\n");
		}
	}

	return 0;
}