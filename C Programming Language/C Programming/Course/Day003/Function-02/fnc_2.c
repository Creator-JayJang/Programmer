/*
	1. 함수의 동작 순서
		함수정의 => 함수호출 => 함수 선언
*/

/*
	두 개의 정수를 입력받아 그 합을 계산하여 출력하는 프로그램을 구현하시오.
*/


#include<stdio.h>
#pragma warning(disable:4996)


// 함수 선언부
int adder(int x, int y); // 매개변수(가인수 = 가짜 변수)

int main() {
	
	adder(); // Call by name, 이름에 의한 호출
	return 0;
}

void adder() {
	// 선언문
	int num1, num2, sum;

	// 입력문
	printf("수1 =");
	scanf("%d", &num1);
	printf("수2 =");
	scanf("%d", &num2);

	// 처리문
	sum = adder(num1, num2); // Call by value, 값에 의한 호출

	// 출력문
	printf("%d + %d = %d\n", num1, num2, sum);
	//return; 생략가능

}

int adder(int x, int y); {
	return x + y;
}
