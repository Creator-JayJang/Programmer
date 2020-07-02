/*
   성적 처리 프로그램

   <입력 및 출력형식>
   == 학적 관리 프로그램 ==
   1. 학생등록
   2. 학생검색
   3. 학생수정
   4. 학생삭제
   5. 작업종료
   ======================
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int a[5] = { 10, 20, 30, 40, 50 };
	int b[4] = { 0 };
	int value;
	int index;		// 삭제될 값의 위치를 저장하는 변수

	printf("a배열의 크기 = %d\n", sizeof(a));

	printf("삭제할 값(10~50) = ");
	scanf("%d", &value); // 30

	for (int i = 0; i < 5; i++) {
		if (a[i] == value) { // 삭제할 값을 찾았다면
			//a[i] = 0;
			index = i; // 2

			break;
		}
	}

	for (int i = 0; i < 5; i++) {
		if (i < index)
			b[i] = a[i];
		/*
		  b[0] == a[0]
		  b[1] == a[1]
		  b[2] == a[3]
		*/
		else
			b[i] = a[i + 1];
	}

	printf("a배열의 크기 = %d\n", sizeof(a));
	return 0;
}