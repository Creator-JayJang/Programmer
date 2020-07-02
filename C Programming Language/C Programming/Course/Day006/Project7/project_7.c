#include<stdio.h>
#pragma warning(disable:4996)

typedef struct Student {
	char name[20];			// 이름
	int id;					// 학번
	int kor, eng, math;		// 국어, 영어, 수학

}Student;


int main() {
	Student s1 = {"aaa",1234,90,88,77};
	Student* sp;	// 포인터 변수
	sp = &s1;


	// 선언문

	// 입력문

	// 처리문

	// 출력문

	printf("이름 : %s\n", s1.name);
	printf("학번 : %d\n", sp->id);
	//printf("학번 : %d\n", (*sp).id);

	return 0;
}