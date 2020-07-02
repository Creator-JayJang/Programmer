/*
	Call By Reference, 주소에 의한 호출 또는 참조에 의한 호출
	- 매개변수의 값이 아니라 그 값의 주소를 이용하여 호출하는 행위
*/

# include<stdio.h>

// 함수선언
void swap(int*, int*);

// main 정의부
int main() {
	int x = 10, y = 20;

	printf("swap 함수 호출 전 \n");
	printf("x=%d, y=%d\n", x, y);

	// 함수 호출
	swap(&x, &y); // Call by reference, 주소에 의한 호출

	printf("swap 함수 호출 후 \n");
	printf("x=%d, y=%d\n", x, y);

	return 0;
}

void swap(int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;

	printf("swap 함수안에서 x, y값 \n");
	printf("x = %d, y = %d \n", *x, *y);
}