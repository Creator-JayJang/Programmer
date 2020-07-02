#include<stdio.h>

	// 전역변수 선언문
	int num; // 전역변수는 자동으로 0으로 초기화 된다.

	// 함수 선언부
	void func(int val);

	int main() {
		printf("num = %d\n", num); // 0
		
		func(3); // call by value, 값에 의한 호출

		printf("num = %d\n", num); // 3

		num++;	// 3 
		printf("num = %d\n", num); // 4

		return 0;
	}

	// 함수 정의부
	void func(int val) {
		num += val; // 3
	}