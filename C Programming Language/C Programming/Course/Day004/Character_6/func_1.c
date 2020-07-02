/* 
	함수(Function)
	1. 정의 
		- 명령어의 집합
		- 모듈(Module)

	2. 형식
		반환형(결과형 리턴값), 함수형(매개변수) {
			함수의 내용정의부;
			return;
		}

		- 반환형 또는 결과형리턴값 : 호출한 곳으로 되돌려주는 값의 자료형(char, int, float, double)
			void : 반환된 값이 없음

		- 함수명 : 사용자 정의 규칙에 맞게 기술되며, 일반적으로 소문자로 작성한다.
		- return 값: 
		  return 수식;
		  return;

	3. 함수의 작성 순서
		- 함수의 정의 : 함수를 기술하는 것
		- 함수의 호출 : 모든 함수는 반드시 호출을 통해서 동작한다.
						단, 시스템에 의해 호출되는 함수(콜백함수, main())
		- 함수의 선언 : main() 앞에 함수의 존재를 알리기 위해 기술
	
	4. 함수의 호출 방법
		- Call by name : 이름에 의한 호출
			함수의 이름을 통해 호출하는 행위

		- Call by value : 값에 의한 호출
			함수를 호출할 때 특정 값을 가져다가 처리하는 행위

		- Call by reference : 참조(주소)에 의한 호출
			함수를 호출할 때 특정 값의 주소를 가져다가 처리하는 행위

	5. 함수의 구현 방법
		- 반환형이 없고, 매개변수도 없는 형태
			void aaa() {}

		- 반환형이 있고, 매개변수가 없는 형태
			int bbb() {}

		- 반환형이 없고, 매개변수가 있는 형태
			void ccc(int x, float y) {}

		- 반환형이 있고, 매개변수도 있는 형태
			float ddd(int x, double y){}		
*/


#include<stdio.h>
#pragma warning(disable:4996)

// 함수 선언문/ 함수 정의부
void menu() { // 단순 출력
	printf("=== 계산기 프로그램 ===\n");
	printf("1. 더하기, 2. 빼기, 3. 곱하기, 4. 나누기\n");
	printf("----------------------------------------\n");
}

int add(int x, int y) {
	return  x + y;
}

int sub(int x, int y) {
	int res;

	res = x - y;

	return res;
}

int mul(int x, int y) {
	return x * y;
}

int div(int x, int y) {
	if (y == 0) y = 1;
	return x / y;
}

int main() {
	// 선언문
	int su1, su2, res = 0; // 위의 res와 이름은 같지만 달라!
	int op; // 입력받을 변수

	// 입력문
	printf("첫번째 수 = ");
	scanf("%d", &su1);
	printf("두번째 수 = ");
	scanf("%d", &su2);

	// 함수 호출
	menu(); // Call by name
	printf("연산자 = ");
	scanf("%d", &op);

	// 처리문
	switch (op) {
	case 1: 
	{
		res = add(su1, su2);
		printf("%d + %d = %d\n", su1, su2, res);
		break;
	}
	case 2: 
	{
		res = sub(su1, su2);
		printf("%d - %d = %d\n", su1, su2, res);
		break;
	}
	case 3: 
	{
		res = mul(su1, su2);
		printf("%d * %d = %d\n", su1, su2, res);
		break;
	}
	case 4: 
	{
		res = div(su1, su2);
		printf("%d / %d = %d\n", su1, su2, res);
	} // case 4 close
	} // switch 문 close

	// 출력문
	//printf("결과 값 = %d\n", res);
	


	return 0; // 시스템 종료
}