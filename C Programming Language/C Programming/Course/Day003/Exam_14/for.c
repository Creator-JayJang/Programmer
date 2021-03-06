/*
	다중 for문
	형식
	for(초기식1; 조건식1; 증감식1) {
		문장1;
		for(초기식1; 조건식1; 증감식1) {
		문장2;
		}
	}

	- 초기식1은 딱 한번만 수행된다.
	- 수행순서
		초기식 1 => 조건식 1 => 문장 1 => 초기식2 => 조건식2 => 문장2 => 증감식2 => 조건식2
		문장2 => 증감식 2 => 조건식 2 => 증감식1 => 조건식1 => 문장1 => 초기식2 => 조건식2
		문장2 .....

*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	/* 출력형식1 
		#####
		printf("#");
		printf("#");
		printf("#");
		printf("#");
		printf("#");
	*/

	for (int i = 1; i <= 5; i++) {
		printf("#");
	}
	
	printf("\n-------------------------------\n"); // 구분자
	/* 출력형식2
		#####
		#####
		#####
		#####
		#####
	*/

	for (int k = 1; k <= 5; k++) {
		for (int i = 1; i <= 5; i++) {
		printf("#");
	}
		printf("\n");
	}

	printf("\n-------------------------------\n"); // 구분자

	/* 출력형식3
			#
			##
			###
			####
			#####
		*/

	for (int k = 1; k <= 5; k++) {
		for (int i = 1; i <= k; i++) {
			printf("#");
		}
		printf("\n");
	}

	printf("\n-------------------------------\n"); // 구분자

	/* 출력형식4
			#####
			####
			###
			##
			#

	*/

	for (int k = 5; 0 < k && k <= 5; k--) {
		for (int i = 1; i <= k; i++) {
			printf("#");
		}
		printf("\n");
	}

	printf("\n-------------------------------\n"); // 구분자


	// 선언문

	// 입력문

	// 처리문

	// 출력문

	return 0;
}