/*
	 하나의 숫자를 입력받아 양수인지 음수인지 판정하여 출력하는 프로그램을 구하시오.

	 <입력형식>
	 수 = 

	 <출력형식>
	 양수입니다.
	 or
	 음수입니다. 
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int su;

	printf("수 =");
	scanf("%d", &su);

	//su > 0 ? printf("양수입니다.\n") : printf("음수입니다.\n");

	if (su > 0) {
		printf("양수입니다.\n");
	}
	else if(su < 0){				//다중 if
		printf("음수입니다.\n");
	}
	else {
		printf("영(0)입니다.\n");
	}

	return 0;
}