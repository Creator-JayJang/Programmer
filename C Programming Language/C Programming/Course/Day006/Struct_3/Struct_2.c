#include<stdio.h>
#pragma warning(disable:4996)

// 구조체 정의
typedef struct Point {	// 평면위의 한 점을 객체화하는 정의문
	int xpos;		// x
	int ypos;		// y


}Point;

int main() {
	// 구조체형 변수를 선언
	//struct Point ap;
	Point start;
	Point end;
	Point third;
	//double distance;	//두점사이 거리를 저장변수
	Point p[3];


	// 구조체 변수를 통해 멤버에 접근 : direct 연산자(.)
	start.xpos=0; //p[0].xpos		
	start.ypos=0; //p[0].ypos

	end.xpos = 10; //p[1].xpos
	end.ypos = 0; //p[1].ypos

	printf("점(x,y) = 점(%d,%d)\n,start.xpo ,start.ypos ");
	printf("점(x,y) = 점(%d,%d)\n,end.xpo ,end.ypos ");

	// 선언문

	// 입력문

	// 처리문

	// 출력문

	return 0;
}