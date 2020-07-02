#include<stdio.h>
#pragma warning(disable:4996)

void aaa(int *num) { // int *num = &num;
	/* 
		포인터 변수는 변수의 주소를 저장하는 변수
		포인터 변수를 선언할 때 일반변수의 선언과 다르게 자료형* 변수명; 
		
		포인터와 관련된 연산자
		- * : 간접연산자(값)
		- & : 주소연산자

	*/
	*num = 10;	// *은 값을 의미한다.
	printf("num = %d\n", num); // 주소
}

int main() {
	int num = 0;

	aaa(&num);
	printf("num = %d\n", num); // 값

	return 0;
}