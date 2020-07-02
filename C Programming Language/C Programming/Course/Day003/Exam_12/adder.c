/* 
	사이합을 계산하는 프로그램
	두 개의 정수를 입력받아 두 수 사이의 자연수들의 합을 계산하여 출력하는 프로그램
	
	<입력형식>
	첫번째 수 =1
	두번째 수 =10

	<출력형식>
	사이합 = 55

	for (초기식; 조건식; 증감식){
		반복할 문장;
	}

	- 증감식 -> 증가 또는 감소를 하는 식, ++/--
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int su1, su2, res = 0;
	int i;			//반복을 처리할 제어변수
	int tmp;		//임시변수

	// 입력문
	printf("첫번째수 = ");
	scanf("%d", &su1); // 1

	printf("두번째수 = ");
	scanf("%d", &su2); // 10

	// 처리문
	if (su1 >= su2) {
		tmp = su1;
		su1 = su2;
		su2 = tmp;
	}

	//if (su1 <= su2) {

		for (i = su1; i <= su2; i++) { // su1 <= su2
		// res = res +1;
			res += i;   // 누적변수 res = res  + i;
		}
	//else {
	//	for (i = su1; i >= su2; i--) { // su1 >= su2
	//		// res = res +1;
	//		res += i;
	//	}
	//}
	//}

	// 출력문
	printf("사이합 = %d \n", res);


	return 0;
}