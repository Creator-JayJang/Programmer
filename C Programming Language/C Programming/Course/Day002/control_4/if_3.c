/*
	세 개의 정수를 입력받아 주어진 조건과 출력형식에 맞게 출력되도록 프로그램을 구현하시오.

	<입력형식>
	첫번째 수 =
	두번째 수 =
	세번째 수 =

	<출력형식>
	최대값 >= 중앙값 >= 최소값

	<처리조건>
	1. 입력받는 변수 num1, num2, num3을 이용하고, 임시기억장소로 사용할 변수 tmp를 이용할 것.
	2. 출력변수는 num1 >= num2 >= num3의 형식으로 출력되도록 구현할 것

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문 
	int num1, num2, num3, tmp;

	// 입력문
	printf("첫번째수 =");
	scanf("%d", &num1);
	printf("두번째수 =");
	scanf("%d", &num2);
	printf("세번째수 =");
	scanf("%d", &num3);

	// 처리문
	/*
		만약 가장 큰 수가 num1이 아니라면, num2 or num3 이 큰 수일때
	*/

	if (num2 > num1 && num2 > num3) {//num2에 가장 큰수가 들어왔다면
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	else if (num3 > num1 && num3 > num2) { //num3에 가장 큰수가 들어왔다면
		tmp = num1;
		num1 = num3;
		num3 = tmp;
	}
	// else {}

	if (num3 > num2) {//두번째로 큰 수가 만약 num3이라면
		tmp = num2;
		num2 = num3;
		num3 = tmp;
	}


	// 출력문
	printf("%d >= %d >= %d\n", num1, num2, num3);

	return 0;
}