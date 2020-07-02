/*
	계산기 프로그램
	두 개의 정수와 하나의 연산자를 입력받아 해당 연산의 계산을 수행한 후 결과를 출력하는 프로그램을 구현하시오.

	<입력 및 출력형식>
	첫번째 수 =
	연산자(+,-,*,/,%) = 
	두번째 수 =

	<처리조건>
	1. 주어진 연산자 이외의 값이 들어오면 다시 입력받도록 구현한다.
	2. 연산자가 '/'이고, 두번째 수가 0이 입력되면 두번째 수를 다시 입력받도록 구현한다.
	3. 기타 조건은 프로글램의 흐름에 맞게 구현할 것.

	<주의>
	입력버프를 통해 입력도니 값은 입력함수에 따라 동작한다.
	입력함수(scanf)는 입력 후 엔터(Enter)를 쳐야 입력이 완료되도록 처리한다.

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int su1, su2, res; // 입력받을 두개의 변수와 계산결과가 저장될 변수
	char op; // 연산자
	
	// 입력문
	printf("첫번째 수 = ");
	scanf("%d", &su1);
	
	getchar(); //엔터를 걸러준다

	do {
		printf("연산자(+,-,*,/) = ");
		scanf("%c", &op);
		getchar();
	} while (op != '+' && op != '-' && op != '*' && op != '/');

	do {
		printf("두번째 수 = ");
		scanf("%d", &su2);
	} while (op == '/' && su2 == 0);

	// 처리문
	switch (op) {
	case '+': res = su1 + su2; break;
	case '-': res = su1 - su2; break;
	case '*': res = su1 * su2; break; 
	case '/': res = su1 / su2; break;
	}


	// 출력문
	printf("%d %c %d = %d\n", su1, op, su2, res);

	return 0;
}
