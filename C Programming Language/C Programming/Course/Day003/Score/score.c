/*
	성적처리 프로그램
	1단계 : 국, 영, 수 점수를 입력받아 총점, 평균 계산/출력
	(평균은 소숫점 이하 2자리까지)
	2단계 : 국, 영, 수 점수를 입력받아 총점, 평균, 학점 계산/출력
	(학점은 switch~case 문 이용)
	3단계 : 국, 영, 수 점수를 입력받아 총점, 평균 계산/출력
			- 평균은 소숫점 이하 2자리까지
			- 각 과목의 점수는 0 ~ 100사이의 값만 입력하되, 범위를 벗어나면 다시 입력하도록 구현
	4단계 : 3명의 국, 영, 수 점수를 입력받아 총점, 평균 계산/출력
			단, 배열을 이용하여 구현할 것.
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	//int kor, eng, math, tot; 
	int score[4] = {0};
	/* score[0]= kor, score[1]= eng, score[2]= math, score[3]= tot*/
	double avg;

	// 입력문
	/*printf("과목1 = ");
	scanf("%d", &score[0]);
	printf("과목2 = ");
	scanf("%d", &score[1]);
	printf("과목3 = ");
	scanf("%d", &score[2]);*/

	for (int i = 0; i < 3; i++) {
		printf("과목%d = ", i+1);
		scanf("%d", &score[i]);
		score[3] += score[i];
	}

	// 처리문
	//	score[3] = score[0] + score[1] + score[2];
	avg = score[3] / 3.0;

	// 출력문
	printf("총점 = %d, 평균 = %.2lf\n", score[3], avg);

	return 0;
}