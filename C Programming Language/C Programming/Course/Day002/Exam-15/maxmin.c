/*
	두 개의 정수를 입력받아 큰 수를 출력하는 프로그램을 구현하시오.
	단, 삼항연산자를 이용하여 구현할 것.

	<입력형식>
	첫번째수 = 
	두번째수 = 
	세번째수 =

	<출력형식>
	큰수 : xx

	<Tip>
	변수는 변하는 수를 뜻한다. 하나의 변수는 하나의 상수를 담을 수 있다.
	만약, 해당 변수에 다른 값이 들어오면 그전에 값은 지워진다.

*/

/*
#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	// 선언문
	int su1,su2; 

	// 입력문
	printf("첫번째수 = ");
	scanf("%d", &su1);
	printf("두번째수 = ");
	scanf("%d", &su2);

	// 처리문
	su1 >= su2 ? printf("큰수:%d", su1 ) : printf("큰수:%d", su2);

	return 0;
}
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int first, second, third, max;

	// 입력문
	printf("첫번째 수 = ");
	scanf("%d", &first);
	printf("두번째 수 = ");
	scanf("%d", &second);
	printf("세번째 수 = ");
	scanf("%d", &third);

	// 처리문
	max = first > second ? first : second; // 첫번째와 두번째를 비교하여 큰수를 max에 담는다.
	max = max > third ? max : third; // max와 세번째수를 비교해서 큰 수를 max에 담는다.

	// 출력문
	printf("최대값 = %d\n", max);

	return 0;
}