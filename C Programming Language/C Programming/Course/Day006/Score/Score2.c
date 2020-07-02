/*
  3명의 성적을 입력받아 총점과 평균을 계산하여 출력하는 프로그램을 구현하시오.
  단 정의된 구조체 Student를 활용할 것.
*/

#include<stdio.h>
// 사용자에 의해 정의된 헤더파일 추가
#include"student.h"
// scanf함수의 보안성검사 무시
#pragma warning(disable:4996)

int main() {
	// 선언문
	//int kor, eng, math, tot;
	//double avg;
	//char name[20];

	// 구조체형변수
	//Student stu; // 동일한 자료형은 하나의 이름으로 묶어서 관리(배열)
	//Student stu2;
	//Student stu3;

	Student stu[3];
	/* stu[0]번 학생, stu[1]번 학생, stu[2]번 학생 */

	// 입력문
	for (int i = 0; i < 3; i++) {
		printf("이름 = ");
		scanf("%s", &stu[i].name);
		printf("국어 = ");
		scanf("%d", &stu[i].kor);
		printf("영어 = ");
		scanf("%d", &stu[i].eng);
		printf("수학 = ");
		scanf("%d", &stu[i].math);

		stu[i].tot = stu[i].kor + stu[i].eng + stu[i].math;
		stu[i].avg = stu[i].tot / 3.0;
	}

	// 처리문
	/*for (int i = 0; i < 3; i++) {
		stu[i].tot = stu[i].kor + stu[i].eng + stu[i].math;
		stu[i].avg = stu[i].tot / 3.0;
	}*/

	// 출력문
	for (int i = 0; i < 3; i++) {
		printf("%s님 성적결과는 다음과 같습니다.\n", stu[i].name);
		printf("총점 = %d, 평균 = %.2lf\n", stu[i].tot, stu[i].avg);
	}
	return 0;
}