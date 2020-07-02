/*
	제어문도 함수의 형태를 가지고 있다.

	다양한 형태의 지역 변수
*/

#include<stdio.h>

int main() {
	// 선언문
	int cnt; // 지역변수	함수내에서도 선언이 가능하지만 밑에서도 쓰고 싶어서

	for (cnt = 0; cnt < 3; cnt++) {
		int num = 0; // 지역변수
		num++;
		printf("%d번째  반복, 지역변수 num = %d\n", cnt+1, num);
	}
	
	/*
		1번째 반복, num = 1
		2번째 반복, num = 1
		3번째 반복, num = 1

	*/

	if (cnt == 3) {
		int num = 7;	// 지역변수
		num++;
		printf("if문 내에 존재하는 지역변수 num = %d\n", num); // 8
	}

	return 0;
}