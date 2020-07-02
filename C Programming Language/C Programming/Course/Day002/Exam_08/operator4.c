/*
	관계연산자 : 두 수의 대소관계를 계산하는 연산자
	- 연산의 결과는 참(true, 1) 또는, 거짓 (false, 0)으로 추출된다.
	- 연산의 방향은 좌에서 우로 진행된다.
	- 종류 : >, >=, <, <=, ==, !=
*/

#include<stdio.h>

int main() {
	// 선언문
	int num1 = 10, num2 = 12;
	int res1, res2, res3;

	// 입력문

	// 처리문

	res1 = num1 == num2; // 0
	res2 = num1 <= num2; // 1
	res3 = num1 > num2; // 0

	// 출력물
	printf("res1 = %d, res2 = %d, res3 = %d\n", res1, res2, res3);
	
	return 0;
}