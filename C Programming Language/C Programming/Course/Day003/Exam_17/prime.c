/*
	1부터 100사이의 자연수 중 소수에 해당하는 값을 출력하는 프로그램을 구현하시오.
	단, 한 줄에 5개씩만 출력되도록 구현할 것.

	<힌트>
	소수(prime) : 1과 자기 자신으로만 나누어 떨어지는 수

*/

// 하나의 숫자를 입력받아 소수인지 아닌지 판정하는 프로그램을 구현하시오.


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int cnt = 0;	// 홀수의 개수를 누적할 변수
	int number;

	for (int i = 1; i <= 100; i++) {
		for (int a = 1; a <= number; a++) {
			if (number % a == 0) continue;
			printf("%5d", i);
			//cnt++; // cnt = cnt + 1; cnt += 1;
			//if (cnt % 5 == 0); // printf("\n");
		}
	}
	return 0;
}

//int main() {
//	
//	// 선언문
//	int number;
//
//	// 입력문
//	printf("2이상의 정수를 입력하세요.");
//	scanf("%d", &number);
//
//	for (int i = 1; i <= number; i++) {
//		if (number % i == 0) {
//			return 0;
//		}
//	}
//	return 0;
//}


	
	//// 처리문
	//for (int i = 2; i < number; i++) {
	//	if (number % i == 0) {


	//		printf("소수가 아님\n");	
	//		return 0;
	//	
	//	}
	//}


//	//// 출력문
//	return 0;
//}