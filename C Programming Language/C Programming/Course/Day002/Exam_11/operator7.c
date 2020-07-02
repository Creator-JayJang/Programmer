/*
	shift 연산자 : 산술연산과 자료이동

	1. 종류
		- Left Shift : 좌측으로 주어진 비트수만큼 이동, 빈칸은 0으로 채운다. <<
		  원 값 * 2 ^ 이동비트수
		
		- Right Shift : >>
	      원 값 / 2 ^ 이동비트수

	2. 
	<<
	>>
*/

#include<stdio.h>

int main() {

	int su1 = 8;  // 1000
	int su2 = 1;  // 0001
	int res1, res2;

	res1 = su1 >> 3; // 0001 = 1, 8/ 2^3
	res2 = su2 << 3; // 1000 = 8, 1*2^3

	printf("res1 = %d, res2 = %d\n", res1, res2);

	return 0;
}