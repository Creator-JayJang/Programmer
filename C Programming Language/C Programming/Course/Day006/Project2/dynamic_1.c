/*
	메모리 동적할당
	- 일반적으로 프로그램을 수행할 때, 필요한 메모리 영역은 선언 후 값을 할당한다.
	- 메모리의 누수를 줄이고 즉, 기억장소의 낭비를 줄이고 효율적으로 프로그래밍
	- 방대한 메모리를 이용하여 작업을 수행할 때 기억장소의 낭비를 최소화할 목적으로 구현하는 기능

	1. malloc과 free 함수
	- 동적할당 : malloc
				포인터 변수 = malloc(할당할 크기 바이트 수);

	- 할당해제 : free
				free(포인터변수);
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int* pi;		// 포인터 변수 선언
	//double* pd;

	// 동적할당 선언
	pi = (int*)malloc(sizeof(int));	// 얘와 똑같은 타입으로 casting
	//pd = (double*)malloc(sizeof(double));
	if (pi == NULL) {	// 할당이 되지 않았다면
		printf("동적할당이 되지 않았습니다.\n");
		return 0;
	}

	*pi = 100;

	printf("동적영역에 저장된 값 : %d\n", *pi);
	free(pi);	// 동적할당 해제

	return 0;
}