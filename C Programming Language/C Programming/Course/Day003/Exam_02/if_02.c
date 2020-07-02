/*
	점수를 입력받아 학점을 계산하는 프로그램을 구현하시오.
	점수가 90점 이상이면 'A', 점수가 80점 이상이면 'B', 점수가 70점 이상이면 'C', 점수가 60점 이상이면 'D',
	그 외에는 'F'가 출력되도록 구현하시오.
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int jumsu;
	char grade;

	// 입력문
	printf("점수 = ");
	scanf("%d", &jumsu);


	// 처리문
	/*if (jumsu >= 90) 
		grade = 'A';
	else if (jumsu >= 80) 
		grade = 'B';
	else if (jumsu >= 70) 
		grade = 'C';
	else if (jumsu >= 60) 
		grade = 'D';
	else 
		grade = 'F';*/

	switch (jumsu/10) { // 10 9 8 7 6 5 4 3 2 1 0  //멈추라는 얘기가 없으면 밑으로 계속 내려간다. 
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}

	// 출력문
	printf("학점 : %c\n", grade);


	return 0;
}