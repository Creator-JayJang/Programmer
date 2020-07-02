/* 
표준 출력함수 : printf()
	1. 형식
	-printf("출력내용");
	-printf("출력서식", 출력변수);
	-printf("출력서식 + 제어문자", 출력변수);

	2. 출력서식 : % 기호와 함께 사용된다.
	- %d : 10진수 정수형, %o(8진수 정수형), %x(16진수 정수형)
	- %f : 실수형(float), 소수이하 6자리까지 추출
	- %c : 문자형(character)
	- %s : 문자열(string)

	3. 제어 문자 : \와 함께 사용된다.
		- \n : 개행(줄바꿈)
		- \t : tab key(일반적으로 8칸 정도를 띄운다.)
*/

#include<stdio.h> // 전처리문 - 헤더파일

// 함수
int main() { //c언어의 시작

	//선언문

	//입력문

	// 처리문

	// 출력문
	printf("Hello Everyone!\n");
	printf("%d년\n", 2020);
	printf("%d월 %d일\n", 5, 19);

	return 0; // 시스템의 종료

} // main의 끝