/*
	하나의 문자를 입력받아 출력한 후 반복여부를 확인한 후 작업을 진행하도록 프로그램을 구현하시오.

	<입력 및 출력형식>
	문자 = k
	k == K
	계속(y/n) = y

	문자 = a
	a == A
	계속(y/n) = N
	프로그램을 종료합니다.

	Tip A(65) a(97), Z(90) z(122)
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	char ch;	// 입력받을 문자
	char check; // 반복여부를 결정하는 문자

	// 입력문 + 처리문 + 출력문
	while (1) {  // 무한루프
		printf("문자 = ");
		scanf("%c", &ch);

		if (ch >= 'A' && ch <= 'Z') { // 입력받은 문자가 대문자라면
			printf("%c ==> %c\n", ch, ch + 32);
		}
		else { // 입력받은 문자가 소문자라면
			printf("%c ==> %c\n", ch, ch - 32);
		}

		getchar();
		/*
			표준입출력함수
			printf, puttchar, puts
			scanf, getchar, gets
		*/

		printf("계속(y/n) = ");
		scanf("%c", &check);
		if (ch >= 'n' || ch <= 'N') break;
		
		getchar();
	}

	printf("프로그램을 종료합니다.\n");

	return 0;
}