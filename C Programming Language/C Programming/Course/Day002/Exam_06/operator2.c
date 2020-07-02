/*
	배정대입연산자(== 복합대입연산자, 축약연산자)
	- 대입연산자와 산술연산자를 결합해놓은 연산자
	- 증감연산자 ++/--
		int a =10;
		a++;	// a = a + 1의 의미이다. a += 1;
	- 종류 : +=, -=, *=, /=, %=

*/

#include <stdio.h>

int main() {
	// 선언문
	int num1 = 2, num2 = 4, num3 = 6;

	// 입력문

	// 처리문
	num1 += 3; // num1 = num1 + 3;
	num2 *= 4; // num2 = num2 * 4;
	num3 %= 5; // num3 = num3 % 5;

	printf("num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3); // 5 16 1

}