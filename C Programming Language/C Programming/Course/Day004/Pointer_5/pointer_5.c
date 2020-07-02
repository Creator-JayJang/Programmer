/*
	포인터를 이용한 문자열 처리
*/


#include<stdio.h>

int main() {
	char* names = "brown";

	printf("이름 : %s\n", names);

	names = "banana";
	printf("이름 : %s\n", names);

	// 문자열 상수가 포인터 변수의 의미를 가질 수 있다.
	/* char names[] == "banana"; */
	while (*names != '\0')  {
		//printf("%c", *names);
		putchar(*names); 
		names++;
	}


	return 0;
}