/* 
	포인터(pointer) : 메모리(주소)를 가르키기 위한 것  --> 배열과 관련
	- 변수(variable) : 상수(값, data)를 저장한다. 
		int x;

	- 포인터 변수(pointer variable) : 주소를 저장한다.
		int *p;
		or
		int *p;
		
	- 연산자
		주소연산자 or 참조연산자 : &
		간접연산자 : *

	- 포인터는 연산이 가능하다. 단, sizeof(), +,-,++,--

*/

#include<stdio.h>

int main() {
	int x = 100; // 정수형 변수
	int* px = &x;

	printf("x = %d\n", x);
	printf("x의 주소 = %d\n", &x);
	printf("x의 주소 = %d\n", px);
	printf("x의 값 = %d\n", *px); // * 1. 선언 - 포인터 변수 2. 값을 바꾸어라

	return 0;
}