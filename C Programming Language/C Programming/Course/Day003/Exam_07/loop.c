/*
	무한 loop :  프로그램의 종료없이 계속 진행하는 것
	for(초기식; ; 증감식;){}, for(; ; ;){}
	while(1){}
	do{}while(1);

	사용자로부터 숫자를 입력받아 출력하는 프로그램을 작성하되, 입력되는 숫자가 0이면 프로그램을 종료하도록 구현하시오.

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int num;

	// 입력문
	//for (; ; ) { // 무한 loop
	//	printf("숫자 [0이 입력되면 종료됩니다.] = ");
	//	scanf("%d", &num);
	//	if (num == 0) break;
	//	printf("num = %d\n", num);
	//}

	while (1) { // 무한 loop
		printf("숫자 [0이 입력되면 종료됩니다.] = ");
		scanf("%d", &num);
		if (num == 0) break;
		printf("num = %d\n", num);
	}


	// 처리문

	// 출력문

	return 0;
}