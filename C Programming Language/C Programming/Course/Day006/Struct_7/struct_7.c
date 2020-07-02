/*
   다음 주어진 입출력형식에 맞게 프로그램을 구현하시오.

   <입력 및 출력형식>
   ==[도형 생성하기]==
   1.점  2.원  3.사각형  4.종료
   ---------------------------
   선택 = 1

   x = 5
   y = 5
   점(x, y) = (5, 5)

   ==[도형 생성하기]==
   1.점  2.원  3.사각형  4.도형보기  5.종료
   -------------------------------------
   선택 = 2

   r = 10
   반지름(r) = 10

   ==[도형 생성하기]==
   1.점  2.원  3.사각형  4.도형보기  5.종료
   -------------------------------------
   선택 = 3

   h = 7
   w = 6
   높이(h) = 7, 너비(w) = 6

   <처리조건>
   1. 점, 원, 사각형은 각각 구조체 객체로 선언하여 처리할 것.
   2. 점은 멤버필드로 x, y좌표값을 같는다.
   3. 원은 멤버필드로 반지름 r을 갖는다.
   4. 사각형은 멤버필드로 높이(h) 와 너비(w)를 갖는다.
*/

#include<stdio.h>
#pragma warning(disable:4996)

// 구조체 정의부
typedef struct Point { // 점
	int x;
	int y;
}Point;

typedef struct Circle { // 원
	int r;
}Circle;

typedef struct Rect { // 사각형
	int w;
	int h;
}Rect;

// 열거형
enum TYPE { POINT = 1, CIRCLE, RECT, EXIT };

int main() {
	// 선언문
	int choice;
	enum TYPE type;

	while (1) { // 무한Loop
		printf("\n==[도형 생성하기]==\n");
		printf("1.점  2.원  3.사각형  4.종료\n");
		printf("선택 = ");
		scanf("%d", &choice);

		switch (choice) {
		case POINT:
		{
			Point p;
			printf("x = ");
			scanf("%d", &p.x);
			printf("y = ");
			scanf("%d", &p.y);

			printf("\n점(x, y) = (%d, %d)\n", p.x, p.y);
			break;
		}
		case CIRCLE:
		{
			Circle cp;
			printf("r = ");
			scanf("%d", &cp.r);

			printf("\n반지름(r) = %d\n", cp.r);
			break;
		}
		case RECT:
		{
			Rect cr;
			printf("w = ");
			scanf("%d", &cr.w);
			printf("h = ");
			scanf("%d", &cr.h);

			printf("\n높이(h) = %d, 너비(w) = %d\n", cr.h, cr.w);
			break;
		}
		case EXIT:
printf("프로그램을 종료합니다.\n");
return 0;

		default:
			printf("선택이 올바르지 않습니다.");
		}
	}

	
	return 0;
}