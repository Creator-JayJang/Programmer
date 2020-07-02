/*
	성적 처리 프로그램 1단계
	국어, 영어, 수학점수를 입력받아 총점과 평균을 계산하여 출력하는 프로그램을 구현하시오.
	단, 주어진 입출력 형식에 맞게 구현할 것.

	<입력형식>
	국어 =
	영어 = 
	수학 = 

	<출력형식>
	총점 : xx 점, 평균 : xx.xx 점

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문

	int kor, eng, math, tot;
	float avg;

	// 입력문

	printf("국어 =");
	scanf("%d", &kor);
	printf("영어 =");
	scanf("%d", &eng);
	printf("수학 =");
	scanf("%d", &math);

	// 처리문
	tot = kor + eng + math;
	avg = tot / 3.0f;

	// 출력문
	printf("\n 총점 : %d 점, 평균 : %.2f 점\n", tot, avg);

	return 0; // 시스템 종료
}
