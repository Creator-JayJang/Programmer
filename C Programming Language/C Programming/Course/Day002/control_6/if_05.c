/* 
	영문자 1개를 입력받아 해당 영문자가 대문자인지 소문자인지 판단하여 출력하는 프로그램을 구현하시오,

	<입력형식>
	문자 = k 

	<출력형식>
	k는 소문자입니다.

	<힌트>
	- 아스키코드값 : A(65) ~ Z(90), a(97) ~ z(122)을 이용할 것.

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	char moon;

	// 입력문
	printf("문자 = ");
	scanf("%d", &moon);

	// 처리문
	if (65 <= moon && moon <= 90) {
		printf("입력받은 문자 %c는 대문자입니다.\n", moon);
	}
	else {
	printf("입력받은 문자 %c는 소문자입니다.\n", moon);
}
	// 출력문

	return 0;
}