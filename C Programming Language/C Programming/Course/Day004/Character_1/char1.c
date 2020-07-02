/*
	상수(Constant) : 데이터(data), 값, 컴퓨터가 처리할 수 있는 형태의 자료를 뜻한다.
	1. 정수형 상수 : 10진수 정수, 8진수 정수, 16진수 정수
	2. 실수형 상수 : 소숫점을 가지고 있는 상수
	3. 문자형 상수 : 앞뒤에 홑따옴표(' ')
	4. 문자열형 상수 : 앞뒤에 쌍따옴표(" ")

	변수(Variable) : 데이터가 저장되는 공간, 기억장소(메모리)
	1. 지역변수 : 특정 블럭({})안에서 선언되어 사용되는 변수
					선언된 지역을 벗어나면 의미가 없다.

	2. 전역변수 : 지역의 제한 없이 사용이 가능한 변수

	3. static 변수
	4. register 변수
	5. auto 변수


	자료형 (Data Type) : 상수와 변수의 크기를 규정해 놓은 예약어
	1. 정수형 : char, int, long
	2. 실수형 : float, double
	3. 문자형 : char
	4. 문자열형 : char[] 배열로 처리

	사용자 정의 자료형 : 구조체(struct), 포인터형(*)
*/


#include<stdio.h>
// 매크로 상수

// 전역변수 선언
#pragma warning(disable:4996)

int main() { // C언어의 시작과 끝을 나타내는 함수, 콜백함수(Callback Function) - 시스템에 의한 호출

	// 선언문 : 변수(지역변수)의 자료형과 초기값(처음값)을 선언할 때 사용하는 문장
	int x = 100; // 데이터 타입
	float y = 3.14f; 
	char z = 'A';

	/* KOREA */
	char str1[5] = {'K','O', 'R','E','A'};
	char str2[6] = "KOREA"; // ""-> 자동적으로 문자열 뒤에 Null string('\n') 빈칸 1 이 들어간다.

	// 입력문 : 키보드를 통해 데이터를 입력받아 처리할 때 사용하는 문장, scanf()

	// 처리문 : 제어문이나 명령어를 통해 처리하는 문장

	// 출력문 : 출력형식에 맞게 출력하는 문장, printf()
	printf("x = %d\n", x);
	printf("y = %f\n", y); // 일반적으로 소숫점이하 6자리까지 추출
	printf("y = %.2f\n", y);
	printf("z = %c\n", z);
	printf("str1 = %s\n", str1);
	// %s : null string을 만나기 전까지 추출된다.
	printf("\n-------------------------------\n");


	for (int i = 0; i < 5; i++) {
		printf("%c", str1[i]);
	}
	printf("\n");
	printf("\n-------------------------------\n");
	printf("str2 = %s\n", str2);



	return 0;
}