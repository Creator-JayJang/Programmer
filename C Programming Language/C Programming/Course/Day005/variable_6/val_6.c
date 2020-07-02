#include<stdio.h>

int func() {
	static int num1 = 0; 
	// 이 문장은 한번만 실행, 초기화 하지 않으면 자동으로 0으로 초기화된다. 지역변수이지만 전역변수의 특성을 가짐
	int num2 = 0;
	num1++, num2++;

	printf("num1 = %d, num2 = %d\n", num1, num2);
}

int main() {
	int i;

	for (i = 0; i < 3; i++) {
		func();
	}
	return 0;
}