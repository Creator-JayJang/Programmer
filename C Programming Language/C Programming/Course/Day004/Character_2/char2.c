/*
	키보드를 통해 이름과 나이 그리고 신장을 입력받아 출력하는 프로그램을 구현하시오.
	<입력형식>
	이름 = 홍길동
	나이 = 19
	신장 = 178.9

	<출력형식>
	홍길동 님의 나이는 19세이고 신장은 178.9 이군요!!
	*/


#include<stdio.h>
#include<string.h> // 문자열을 처리하는 함수를 내장하고 있는 헤더 파일
// strcpy, 

#pragma warning(disable:4996) //scan 함수의 안정성이 떨어짐

int main() {

	// 선언문
	char name[80];	// 기억장소의 낭비를 초래할 수 있다.
	/* 배열명은 배열의 시작주소를 뜻한다. */

	/*int age;
	double height; */

	// 입력문
	printf("이름 = ");
	scanf("%s", name); // &name 이런식으로 안써도 됨 주소를 포함하고 있어서

	gets(name);
	/* 문자열은 대입연산자를 사용할 수 없다.
		getchar(); -> get character,  한 문자를 입력받아라
		gets(); -> get string, 문자열을 입력받아라
		*/

	//strcpy(name, gets());

	/*printf("나이 = ");
	scanf("%d", &age);
	printf("신장 = ");
	scanf("%lf", &height);*/


	// 처리문

	// 출력문
	//printf("%s님의 나이는 %d세이고 신장은 %.1lf 이군요!!\n", name, age, height);
	printf("%s님 환연합니다. !! \n", name);

	return 0;
}