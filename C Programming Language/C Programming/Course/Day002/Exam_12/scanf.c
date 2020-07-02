/*
	표준 입력 함수 : scanf()
	1. 형식
		scanf("입력서식", &변수명);
		키보드를 통해 입력서식에 맞는 데이터를 담을 해당 변수의 주소를 리턴시켜주는 함수

	2. 주의 
	- Visual Studio 2013버전 이후부터 scanf 함수의 보안과 안정성의 문제를 들어
	  MS 사는 자체적으로 scanf_s() 라는 함수를 만들어 그것을 사용하길 권장한다.
	- 첫번째 방법 : 해당 프로젝트명에서 우측버튼은 클릭한 후 <속성>으로 이동한 후 
	  C/C++ 항목에서 전처리기에서 기존에 있던 전처리 정의문 뒤에
	  ;_CRT_SECURE_NO_WARNINGS; 입력한다. 

	- 두번째 방법 : 해당 프로젝트 명에서 우측버튼을 클릭한 후 <속성>으로 이동하여 
	  C/C++ 항목의 일반 탭에서 보안검사를 뜻하는 SDL 항목을 아니오로 변경한다

	- 세번째 방법 : 매크로 상수를 지정한다.
	  #pragma warnign(disable: 4996)
*/

// 두 개의 숫자를 입력받아 덧셈을 계산한 후 그 결과를 출력하는 프로그램을 기술하시오.

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
// 선언문 : 변수의 자료형과 초기 값을 선언하는 문장
	int su1, su2;
	int sum;
	
	// 입력문
	// printf("두 개의 정수를 입력하세요 :")
	// printf("%d %d", &su1, &su2);

	printf("첫번째수 = ");
	scanf("%d", &su1);
	printf("두번째수 = ");
	scanf("%d", &su2);



	// 처리문
	sum = su1 + su2;

	// 출력문
	printf("%d + %d = %d\n", su1, su2, sum);

	return 0;


}