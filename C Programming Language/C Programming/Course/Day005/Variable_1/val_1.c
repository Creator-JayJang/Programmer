/*
	변수의 존재기간과 접근범위'
	- 메모리상에 존재하는 기간
	- 변수에 접근할 수 있는 범위

	1. 지역변수(Local variable)
		- 해당 지역을 벗어나면 자동으로 소멸된다.
		- 선언된 지역내에서만 유효하기 때문에 선언된 지역이 다르면 이름이 같아도 의미는 다르다.
	2. 전역변수(Global variable)
		- 프로그램의 시작과 동시에 메모리에 할당되어 종료시까지 존재한다.
		- 별도의 값으로 초기화하지 않으면 0으로 초기화 된다.
		- 프로그램 전에 영역 어디서든 접근이 가능하다.


	3. 정적변수(Static variable)
		- 지역변수, 전역변수 모두 static 선언을 할 수 있다.
		1) 지역변수에 static 지정 예약어를 사용한다.
			- 선언된 함수 내에서만 접근이 가능하다. 
			- 함수 내에 선언된 지역변수는 해당 함수가 반환되면 소멸한다.		(지역변수의 특성)
			- 딱 한번만 초기화되고 프로그램 종료시까지 메모리 공간에 존재한다.	(전역변수의 특성)


	4. 레지스터변수(Register variable)
	5. 자동변수(Auto variable)
*/

#include<stdio.h>

int func1() {
	// 선언문
	int num = 10;

	// 입력문

	// 처리문
	num++;  // 10

	// 출력문
	printf("func 함수의 num = %d\n", num); // 11

	return 0; // num 변수의 소멸
}

int func2() {
	int num1 = 20;
	int num2 = 30;

	num1++, num2--;

	printf("func2 함수의 num1 = %d, num2 = %d\n", num1, num2); // 21 29

	return 0; // num1, mum2의 소멸
}

int main() {
	int num = 17; // 지역변수

	func1(); // call by name
	func2();

	printf("main 함수의 num = %d\n", num); // 17

	return 0; // main함수의 
	
}