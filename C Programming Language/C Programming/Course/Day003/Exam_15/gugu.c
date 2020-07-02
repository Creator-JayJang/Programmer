/* 
	구구단 출력
	다중 for문을 활용하여 구구단이 출력되도록 구현하시오.
	단수(2~9), 자연수(1~9), 결과
	**다중 for문은 바깥쪽 for문이 한번 동작할 때마다 안쪽 for문은 주어진 횟수만큼 반복해서 수행된다.
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	for (int dan = 2; dan <= 9; dan++) { // 바깥쪽 for 문 - 단
		printf("==%d 단 ===", dan);
		for (int su = 1; su <= 9; su++) { // 바깥쪽 for 문 - 단
			printf("%d x %d = %d\n", dan, su, dan * su);
		}
	
		printf("\n");
	}
	// 선언문

	// 입력문

	// 처리문

	// 출력문

	return 0;
}