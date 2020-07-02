/*
  구조체(struct) : 서로 다른 자료형을 하나의 이름으로 묶어서 사용하는 자료구조
  - 사용자 정의 자료형에 해당한다.
*/

#include<stdio.h>
#include<string.h> // strcpy, strcmp, strlen... 문자열을 처리하는 함수
#pragma warning(disable:4996)

// 구조체 정의
typedef struct Student {
	// Member Field(멤버필드)
	int sub[4];		// 국어, 영어, 수학, 총점
	char name[20];	// 영문자 19글자, 한글 9글자
	double avg;		// 평균
}Student;

int main() {
	// 선언문 : 변수의 자료형과 초기값을 선언하는 문장
	//struct Student stu;
	//typedef struct Student Student;
	Student stu;

	// 입력문
	stu.sub[0] = 90;
	stu.sub[1] = 87;
	stu.sub[2] = 88;
	//stu.name = "홍길동";
	strcpy(stu.name, "홍길동");

	// 처리문
	stu.sub[3] = stu.sub[0] + stu.sub[1] + stu.sub[2];
	stu.avg = stu.sub[3] / 3.0;

	// 출력문
	printf("%s님의 성적은 다음과 같습니다.\n", stu.name);
	printf("총점 : %d, 평균 : %.2lf\n", stu.sub[3], stu.avg);

	return 0;
}