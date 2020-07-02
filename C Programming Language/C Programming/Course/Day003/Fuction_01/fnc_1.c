/* 
	함수(Fuction) : 독립된 프로그램 덩어리, 명령어 집합, 모듈
	- 자주 빈번히 사용하는 기능이나 명령어를 묶어서 하나의 명령으로 수행하도록 구현된 것.
	- c언어는 무수히 많은 함수로 구성되어 있다.
	- 반드시 c언어를 동작시키기 위해서는 main이라는 이름의 함수가 존재해야 한다.
	- 모든 함수는 동등한 권한을 가진다.
	- 단, 프로그램의 시작을 나타내는 main은 시스템에 의해서 호출되는 콜백함수이고
		나머지 함수는 사용자의 호출에 의해서 실행되는 사용자 정의 함수이다.
	- 함수는 호출에 의해서 사용된다.

	1. 함수의 원형
		경과형리턴값(반환형) 함수명(매개변수) {
			내용정의부;
			return 값;
		}
	2. 함수 호출방법
	1) Call By name (이름에 의한 호출)
		- 매개변수 없이 함수의 이름으로 호출하는 행위

	2) Call By Value (값에 의한 호출)
		- 매개변수의 값을 이용하여 함수를 호출하는 행위

	3) Call By Reference (참조 = 주소에 의한 호출)
		- 매개변수의 값이 아닌 주소를 이용하여 함수를 호출하는 행위
*/

#include<stdio.h>
#pragma warning(disable:4996)

// void ddd() {
//	return; // void일 경우 return을 생략할 수 있다.
// }

int eee(int x, int y) {
	return x + y;
	}

//int fff(int x, int y) {
//	int z = x + y;
//	return z;
//}

void ggg() {
	
	printf("ggg함수입니다. \n");
		//return
	}

int main(void) { // int - 반환형 | int, char, double | main - 함수이름

	// 선언문

	// 입력문

	// 처리문

	// 출력문



	printf("main 함수영역 \n");
	
	ggg(); // Call by Name , 이름에 의한 호출

	//aaa();
	printf("eee함수 호출 결과 : %d\n", aaa());
	printf("프로그램을 종료합니다.");

	return 0;
}