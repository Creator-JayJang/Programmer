/*
	비트연산자 : 비트(bit)로 변환한 후 계산을 수행하는 연산자
	- &, |, ~
	- 비트(Bit, Binary digit, 2진수)
	- 비트부정(~) 연산시, 부호가 음수로 변경되면 2의 보수처리를 해야한다.
	- 1의 보수(1's Complement) : 0이면 1, 1이면 0으로 변경
	- 2의 보수(2's Complement) : 1의 보수 후 마지막 비트에 1을 더한다.

*/

#include<stdio.h>

int main() {
	// 선언문
	int num1 = 5; // 0000 0101
	int num2 = 9; // 0000 1001
	int res1, res2, res3;


	// 입력문

	// 처리문
	res1 = num1 & num2; // 0101 & 1001 = 0001, 1
	res2 = num1 | num2; // 0101 | 1001 = 1101, 13
	res3 = ~num1;
	
	/*
	0000 0101 
	1111 1010
	1 000 0101 + 1
	1 000 0110 = -6
	*/

	// 출력물
	printf("res1 = %d, res2 = %d, res3 = %d\n", res1, res2, res3);

	return 0;
}