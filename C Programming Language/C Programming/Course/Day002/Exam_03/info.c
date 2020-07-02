/*
	자기소개
	1. 이름
	2. 나이
	3. 혈액형
	4. 주소

	조건
	- 반드시 prinf함수의 서식을 이용하여 출력할것
	- %d, %s, %c 등
	- 제어문자를 이용하여 출력할 것.
	- \n, \t 등
	
	출력형식
	이름 : 
	나이 : 
	혈액형 : 

*/

#include<stdio.h>

int main() {
	/*
	printf("%s장재준\n", "이름 :");
	printf("%s26\n", "나이 :");
	printf("%sO\n", "혈액형:");
	printf("%s전라북도 전주시\n", "주소:");
	*/
	printf("이름 : %s\n", "장재준");
	printf("나이 : %d\n", 26);
	printf("혈액형 : %s\n", "O");
	printf("주소 : %s\n", "전라북도 전주시");

	return 0;

}