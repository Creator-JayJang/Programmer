/*
	다섯개의 정수를 입력받아 가장 큰 수를 찾아 출력하는 프로그램을 구현하시오.
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	//// 선언문
	//int a, b, c, d, e, max;

	//// 입력문
	//printf("수1 = ");
	//scanf("%d", &a);
	//printf("수2 = ");
	//scanf("%d", &b);
	//printf("수3 = ");
	//scanf("%d", &c);
	//printf("수4 = ");
	//scanf("%d", &d);
	//printf("수5 = ");
	//scanf("%d", &e);

	//// 처리문
	//max = a;
	//if (max < b) max = b;
 //   if (max < c) max = c;
	//if (max < d) max = d;
	//if (max < e) max = e;

	//// 출력문
	//printf("최대값 = %d\n", max);

	int data[5], max;

	/*printf("수1 = ");
	scanf("%d", &data[0;
	printf("수2 = ");
	scanf("%d", &data[1);
	printf("수3 = ");
	scanf("%d", &data[2]);
	printf("수4 = ");
	scanf("%d", &data[3]);
	printf("수5 = ");
	scanf("%d", &data[4]);*/

	for (int i = 0, i < 5; i++;) {
		printf("수 %d =", i + 1);
		scanf("%d", &data[i]);
	}

	max = data[0];
	for (int i = 1; i < 5; i++;) {
		if (max < data[i]) max = data[i];
	}

	printf("최대값 = %d\n", max);

	return 0;
}