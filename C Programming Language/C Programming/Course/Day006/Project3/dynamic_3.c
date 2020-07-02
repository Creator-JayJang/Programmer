/*
   다섯개의 정수를 입력받아 합을 계산한 후 결과를 출력하는 프로그램을 구현하시오.
   입력받은 정수중 가장 큰 값을 출력하는 프로그램을 구현하시오.
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int num, max;

	printf("1번째 자료 = ");
	scanf("%d", &num);

	max = num;

	for (int i = 1; i < 5; i++) {
		printf("%d번째 자료 = ", i + 1);
		scanf("%d", &num);

		if (max < num) max = num;
		//sum += num;
	}

	printf("max = %d\n", max);

	return 0;
}