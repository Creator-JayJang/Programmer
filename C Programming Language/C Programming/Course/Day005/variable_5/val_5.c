/* 
	지역변수와 전역변수의 이름이 같을 때 지역변수가 우선권!
*/

#include<stdio.h>

int add(int val);	// 전역변수
int num = 1;

int main() {
	int num = 5;	// 지역변수

	printf("num = %d\n", add(num));	//14
	printf("num = %d\n", num+9);	//14 scope 연산자


	return 0;
}


int add(int val) {
	int num = 9;	// 지역변수
	num += val;

	 return num;
}
