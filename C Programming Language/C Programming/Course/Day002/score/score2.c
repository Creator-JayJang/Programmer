/*
	성적처리프로그램 2단계
	국어, 영어, 수학 점수를 입력받아 총점과 평균, 그리고 학점을 계산하여 출력하는 프로그램을 구현하시오.

	<입력형식>
	국어 =
	영어 =
	수학 =

	<출력형식>
	총점 : xx, 평균 : xx.xx, 학점 : xx

	<처리조건>
	1. 주어진 입출력형식에 맞게 구현할것
	2. 평균은 소숫점 이하 둘째자리까지 구현할 것
	3. 학점은 평균을 가지고 구현하되, A, B, C, D, F 로 표시할 것
	4. 학점은 평균이 90점 이상이면 'A', 평균이 80점 이상이면 'B', 평균이 70점 이상이면 'C', 평균이 60점 이상이면 'D', 이외는 'F'로 처리할 것.


*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int kor, eng, math, tot;
	float avg;
	char grade;

	// 입력문
	printf("국어 = ");
		scanf("%d", &kor);
	printf("영어 = ");
		scanf("%d", &eng);
	printf("수학 = ");
		scanf("%d", &math);

	// 처리문
	tot = kor + eng + math;
	avg = tot / 3.0f;
		if (avg >= 90) { grade = 'A'; }
		else if (avg >= 80) {grade = 'B';}
		else if (avg >= 70) { grade = 'C'; }
		else if (avg >= 60) { grade = 'D'; }
		else { grade = 'F'; }

	// 출력문
	printf("총점: %d, 평균 : %.2f 학점 : %c \n", tot, avg, grade);

	return 0;
}