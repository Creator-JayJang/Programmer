/*
   원을 객체화하는 구조체를 선언하여 프로그래밍 하시오.

*/

#include<stdio.h>
#pragma warning(disable:4996)

// 매크로상수 정의부
#define PI 3.14
#define SIZE 5

// 구조체 정의부
typedef struct Circle {
	int radius;		// 반지름, 4byte
	double area;	// 원의면적, 8byte
}Circle;

/*
  원의 객체를 5개 입력받아 원의 면적을 계산한 후 면적이 100이상 200이하인 객체수를
  출력하는 프로그램을 구현하시오.

  반지름을 입력받아 원의 객체를 생성한 후 입력된 반지름이 0이면 입력을 마친다.
  이때 입력된 반지름을 이용하여 원의 면적을 계산한 후 그 값이 100이상 200이하인
  객체수를 출력하는 프로그램을 구현하시오.
*/

int main() {
	// 구조체형 변수 선언
	Circle ac;
	Circle c[80];

	double area;	// 원의면적
	int count = 0;	// 객체수를 누적하는 누적변수(반드시 초기화시킨다.)

	int x;     // 4byte
	int y[5];  // 4byte * 5 20byte

	// 입력문
	//for (int i = 0; i < 80; i++) {
	int i = 0;
	while (1) {
		printf("반지름 = ");
		scanf("%d", &c[i].radius);
		if (c[i].radius == 0) break;
		c[i].area = (double)c[i].radius * c[i].radius * PI;
		//printf("반지름 %d의 면적 = %.2lf\n", c[i].radius, area);
		if (c[i].area >= 100 && c[i].area <= 200) count++;
		i++;
	}


	// 처리문
	//area = ac.radius * ac.radius * PI;

	// 출력문
	//printf("반지름 %d의 면적 = %.2lf\n", ac.radius, area);
	printf("100이상 200이하인 객체수 = %d\n", count);
	return 0;
}