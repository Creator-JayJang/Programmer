/*
	 성적 처리 프로그램 3단계
	 국어, 영어, 수학점수를 입력받아 총점과 평균, 그리고 학점을 출력하는 프로그램을 구현하시오.

	 <입력형식>
	 국어 =
	 영어 =
	 수학 =

	<출력형식>
	총점 = xx, 평균 = xx.xx, 총점 = xx

	<처리조건>
	1. 프로그램에서 사용할 변수의 자료형과 이름을 임의로 구현한다.
	2. 평균은 총점을 이용하여 구현하되, 소숫점 이하 둘째자리까지 추출한다. 
	3. 학점은 평균을 이용하여 구현하되, 점수가 90점 이상이면 'A', 점수가 80점 이상이면 'B', 점수가 70점 이상이면 'C', 점수가 60점 이상이면 'D',
	   그 외에는 'F'로 처리한다.
	4. 학점은 switch~case 문을 이용하여 구현한다.
	5. * 각 과목의 점수는 0 ~ 100점 사이에 입력하되, 범위를 벗어나면 다시 입력받도록 구현한다.

	*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int kor, eng, math, tot;
	double avg;
	char level;

	// 입력문
	do {
	printf("국어 = ");
	scanf("%d", &kor);
	} while (kor < 0 || kor > 100);
	
	do {
	printf("영어 = ");
	scanf("%d", &eng);
	} while (eng < 0 || eng > 100);

	do {
	printf("수학 = ");
	scanf("%d", &math);
	} while (math < 0 || math > 100);

	

	// 처리문
	tot = kor + eng + math;
	avg = tot / 3.0;

		switch ((int)avg/ 10) { // 정수형
		case 10:
		case 9: level = 'A'; break; //90~99
		case 8: level = 'B'; break; //80~89
		case 7: level = 'C'; break; //70~79
		case 6: level = 'D'; break; //60~69
		default: // case에 원하는 값이 존재하지 않을 때
			level = 'F'; 
		}

	// 출력문
	printf("총점 = %d, 평균 = %.2lf, 학점 = %c\n", tot, avg, level);
	/*
		int => %d, long => %ld
		float => %f, double => %lf
	*/


	return 0;
}