/* 
	표준 입출력 함수 : printf(), scanf()
	문자 전용 입출력 함수 : putchar(), getchar()
	문자열 전용 입출력 함수 : puts(char 배열명), gets(char 배열명)
*/


#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main() {
	
	//int a, b;
	char pass[10]; // 문자열의 크기 +1, 10 byte(9 byte) - 영문자 9글자, 한글 4글자

	//printf("숫자 두개 =");
	//scanf("%d %d", &a, &b);

	printf("10이하의 문자열 =");
	//scanf("%s", pass);
	gets(pass);

	/* 
		c++ : getline(), cin_getline() --> c언어의 문제를 극복하기 위해
	*/

	printf("입력된 문자열 : %s\n", pass);


	//printf("a = %d, b = %d\n", a, b);

	
	// 선언문

	

	// 입력문

	// 처리문

	// 출력문

	return 0;
}