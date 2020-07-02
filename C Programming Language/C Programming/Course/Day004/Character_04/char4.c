/* 
	암호를 입력받아 일치하면 프로그램을 종료하고, 그렇지 않으면 계속 암호를 묻는 질문이
	출력되는 프로그램을 구현하시오.

	<입력 및 출력형식>
	암호를 정확히 입력하면 프로그램이 종료됩니다.
	암호 = java
	암호 = c++
	암호 = c
	암호 = C
	프로그램을 종료합니다.
*/


#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	char password[80] = "C"; // 암호 세팅
	char code[80];			// 입력 받을 암호

	printf("암호를 정확히 입력하시면 프로그램이 종료됩니다. \n");

	while (1) { // 무한 Loop
		printf("암호 =");
		scanf("%s", code);

		if (strcmp(password, code) == 0) {
			//printf("프로그램을 종료합니다.\n");
			//return 0;
			break;
		}
	}

	// 입력문

	// 처리문

	// 출력문

	return 0;
}