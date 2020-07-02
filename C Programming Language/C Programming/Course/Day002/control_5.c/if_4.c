/* 
	주민등록번호 : 123455-abcdefg
	생년월일 : 12/34/56
	성별판정 : a
				- 1800년대 : 0(여), 9(남)
				- 1900년대 : 2(여), 1(남)
				- 2000년대 : 4(여), 3(남)
	출생지역 : b
				- 0 : 서울, 경기
				- 1 : 인천, 강원
				- 2 : 대전, 충남
				- 3 : 충북
				- 4 : 경북
				- 5 : 경남
				- 6 : 전북
				- 7 : 전남
				- 9 : 제주
	주민등록번호 8번째에 숫자를 입력받아 해당 사람의 성별과 출생년도를 출력하는 프로그램을
	구현하시오.

	<입력형식>
	8번째 숫자 하나 = 
	
	<출력형식>
	출생년도 : xxxx년도
	성별 : 남성 or 여성
	
	<처리조건>
	1. 변수정의 
		정수형 변수 : jumincode, year, gender
	2. 주어진 입출력 형식에 맞게 구현할 것.
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int jumincode, year, gender;

	// 입력문
	printf("8번째 숫자하나 = ");
	scanf("%d", &jumincode);
	gender = jumincode;

	// 처리문
	if(jumincode == 0 || jumincode == 9 )
		year = 1800;
	else if (jumincode == 2 || jumincode == 1)
		year = 1900;
	else
		year = 2000;

	// 출력문
	printf("출생년도= % d\n", year);
	if (gender % 2 == 0) {
//		printf("출생년도= % d\n", year);
		printf("성별= 여자\n");
	}
	else {
		printf("성별= 남자\n");
	}

	return 0;
}