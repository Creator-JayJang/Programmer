/*
	수나열 프로그램
	세 개의 정수를 입력받아 큰 순서대로 나열하여 출력하는 프로그램을 구현하시오.

	<입력형식>
	첫번째 수 = 
	두번째 수 =
	세번째 수 = 

	<출력형식>
	큰수 >= 중간수 >= 작은수

	<처리조건>
	- 함수와 포인터를 이용하여 구할 것.

*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int firts, second, third, tmp;

	printf("첫번째 수 = ");
	scanf("%d", &first);

	printf("두번째 수 = ");
	scanf("%d", &second);

	printf("세번째 수 = ");
	scanf("%d", &third);

	printf("%d >= %d >= %d\n", first, second, third);

	return 0;
}