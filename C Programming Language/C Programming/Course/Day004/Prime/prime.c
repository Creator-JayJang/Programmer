/*
	소수 구하기(prime)
	- 소수란 1과 자기 자신으로만 나누어 떨어지는 수를 말한다.
*/


#include<stdio.h>

// 매크로 상수 : 문자를 상수로 취급하는 것
// 숫자는 의미를 가질 수 없다. 의미가 있는 숫자로 변환하여 사용하고 싶을 때
#define MAX 100 // 대문자가 원칙

int main() {
	// 선언문
	int num, flag = 0; // flag변수 (sw 스위칭 변수)는 0과 1만 가지도록 구현
	int i, j;
	int count = 0;

	// 입력문

	// 처리문
	for (int i = 2; i <= MAX; i++) {
		/* 젯수 : 나누는 수를 반복 처리하는 제어문 */
		for (j = 2; j <= i; j++) {
			if (i % j == 0)	break;
		}

		if (i == j) {
			printf("%3d", i);
			count++;
			if (count % 5 == 0) printf("\n");
		}
	}
	printf("\n");

	// 출력문

	return 0;
}