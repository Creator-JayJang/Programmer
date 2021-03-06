/* 
	논리연산자 : 논리값(참 또는 거짓)을 이용하여 계산을 수행하는 연산자로 그 결과는 참 또는 거짓으로 추출된다.
				 일반적으로 하나 이상의 관계연산자를 묶어서 계산을 수행할 때 사용된다.
				 AND(논리곱, &&) : 모두 참일 때 결과가 참이된다.
				 OR(논리합, ||) : 어느 것 하나라도 참이면 결과가 참이된다.
				 NOT(논리부정, !) : 단항연산자로 하나의 항을 이용하여 계산된다. 항이 참이면 거짓으로 



*/

#include <stdio.h>

int main() {
	// 선언문
	int num1 = 10, num2 = 12;
	int res1, res2, res3;

	// 입력문

	// 처리문
	res1 = num1 == 10 && num2 == 12; // 1 && 1 = 1
	res2 = num1 < 12 || num2 > 12; // 1 || 0 = 1
	res3 = !num1; // c언어는 0이 아니면 참으로 간주한다. 

	// 출력문
	printf("res1 = %d, res2 = %d, res3 = %d\n", res1, res2, res3);

	return 0;
}