/*
	두 개의 정수를 입력받아 최대값(max)과 최소값(min)을 출력하는 프로그램을 구현하시오.

	<입력형식>
	첫번째수 = 
	두번째수 = 
	세번째수 =

	<출력형식>
	최대값 =
	최소값 =
	중위수 =
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int num1, num2, num3, max, min, median;

	// 입력문
	printf("첫번째수 = ");
	scanf("%d", &num1);
	printf("두번째수 = ");
	scanf("%d", &num2);
	printf("세번째수 = ");
	scanf("%d", &num3);

	// 처리문
	/*if (num1 > num2) {
		max = num1;
		min = num2;
	}
	else {
		max = num2;
		min = num1;
	}
	*/

	/*
		논리연산자 : 논리값을 가지고 연산을 수행하는 연산자
		- 하나이상의 관계연산자를 묶어서 처리할 때 사용하는 연산자
		- AND(&&) : 하나이상의 조건이 모두 참일 때 참이된다.
		- OR(||) : 모든 조건 중 어느것 하나라도 참이면 결과가 참이된다. 
	*/

	// 가장 큰 수를 먼저 찾아내는 작업
	if (num1 > num2 && num1 > num3) {
		max = num1;
		// 가장 작은 수를 찾아내는 작업
		if (num2 > num3) {
			min = num3, median = num2;
		}
		else {
			min = num2; median = num3;
		}
	}
	else if(num2 > num1 && num2 > num3) {
		max = num2;
		// num2를 제외한 후 가장 작은 수를 찾아내는 작업
		if (num1 > num3) {
			min = num3; median = num1;
		}
		else {
			min = num1; median = num3;
		}
	}
	 else {
		max = num3;
		// num3을 제외한 후 가장 작은 수를 찾아내는 작업
		if (num1 < num2) {
			min = num1; median = num2;
		}
		else {
			min = num2; median = num1;
		}
	}
	 
	// 출력문
	printf("최대값 = %d\n", max);
	printf("중위수 = %d\n", median);
	printf("최소값 = %d\n", min);

	return 0;


}