/*
	1부터 100까지 자연수가 출력되는 프로그램을 구현하시오.
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문

	// 입력문

	// 처리문

	// 출력문

	int cnt = 0;	// 홀수의 개수를 누적할 변수


	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) continue;
		printf("%5d", i);
		cnt++; // cnt = cnt + 1; cnt += 1;
			if (cnt % 5 == 0); printf("\n");


		//if(i % 10 == 0) printf("\n");
	}

	return 0;
}