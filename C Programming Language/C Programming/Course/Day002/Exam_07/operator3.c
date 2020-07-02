/*
증감연산자 : 1씩 증가하거나 감소하는 연산자, ++/--
	- 전위연산자 : ++a, --b
	- 후위연산자 : a++, b--
	- 후위연산자의 연산순서는 대입연산자(=)보다 늦다.
*/

#include<stdio.h>

int main() {
	int num1 = 10;
	int num2 = (num1--)+2;

	printf("num1 = %d, num2 =%d\n", num1, num2); // 9 12
	// printf("num1 = %d, num2 =%d\n", ++num1, num2++); // 13, 12 
	
	return 0;
}