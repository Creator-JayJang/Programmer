/*
	구구단을 출력하는 프로그램을 구현하시오.
	사용자로부터 단수를 입력받아 해당 단수에 구구단을 출력하시오.
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int dan;
	int i;	// 제어변수

	// 입력문
	printf("단수 = ");
	scanf("%d", &dan);


	// 처리문
	for (i = 1; i<=9; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}

	// 출력문
	/*printf("%d x %d = %d\n", 7, 1, 7 * 1);
	printf("%d x %d = %d\n", 7, 1, 7 * 2);
	printf("%d x %d = %d\n", 7, 1, 7 * 3);
	printf("%d x %d = %d\n", 7, 1, 7 * 4);
	printf("%d x %d = %d\n", 7, 1, 7 * 5);
	printf("%d x %d = %d\n", 7, 1, 7 * 6);
	printf("%d x %d = %d\n", 7, 1, 7 * 7);
	printf("%d x %d = %d\n", 7, 1, 7 * 8);
	printf("%d x %d = %d\n", 7, 1, 7 * 9);*/

	return 0;
}