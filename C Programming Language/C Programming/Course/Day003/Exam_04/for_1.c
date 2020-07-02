/*
	반복문 : 동일하거나 유사한 성격을 가지고 있는 문장을 반복할 때 사용하는 문
		- 유사한 성격은 일정한 규칙을 가지고 있는 문장을 뜻한다. 
		- 주어진 조건이 참일 때 반복문을 수행한다.

	1. for 문 : 횟수를 제어하여 반복할 때 주로 사용된다. 
		1) 형식
		   for (초기식; 조건식; 증감식){
		   반복할 문장;
		   }
	
	2. while 문 : 사용자에 의해 반복을 제어할 때 주로 사용된다.
		1) 형식
		   while(조건식){
		   반복할 문장;
		   }
 	
	3. do ~ while 문 : 조건이 거짓이라도 딱 한번은 수행된다.
	1) 형식
		  do {
		   반복할 문장;
		   } while(조건식)
	
	*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	 int i ;

//	/*printf("%d\n", 1);
//	printf("%d\n", 1);
//	printf("%d\n", 1);
//	printf("%d\n", 1);
//	printf("%d\n", 1);
//	printf("%d\n", 1);
//	printf("%d\n", 1);
//	printf("%d\n", 1);
//	printf("%d\n", 1);
//	printf("%d\n", 1);*/
//
//	for (i=1; i<=10; i=i+1) { // i += 1, i++
//		printf("%d\n", 1);
//	}

	// 처리문

	// 출력문

	i = 1;
	//while (i <= 10) {
	//	printf("%d\n", 1);
	//	i++;
	//}
	//return 0;

	
		 do {
			 printf("%d\n", 1);
			 i++;
		 } while (i <= 10);
}
