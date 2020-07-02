#include<stdio.h>

void change(int *x, int *y) { // int *x = &x, int *y = &y  * 주소의 값을 저장하기 위해서
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	printf("change 함수 내에서 x = %d, y = %d\n", *x, *y); // 20 10
}

int main() {
	int x = 10, y = 20;

	printf("change 호출 전에 x = %d, y = %d\n", x, y); // 10 20 
	change(&x, &y); // call by value - & 주소 연산자 
	printf("change 호출 후에 x = %d, y = %d\n", x, y);
	// main의 x와 change의 x는 다른놈

	return 0;
}