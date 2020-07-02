/* 
	1  2  3  4  5	--> 1줄 : 1칸 2칸 3칸 4칸 5칸
	6  7  8  9  10	--> 2줄 : 1칸 2칸 3칸 4칸 5칸
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int data[5][5] = 0; // 배열을 초기화
	int num	= 0;		// 찍히는 숫자

	// 배열에 숫자를 대입하는 로직
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			//num++;
			data[i][j] = ++num;

		}
	}

	// 배열의 요소를 출력하는 로직 

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", data[i][j]);

		}
		printf("\n");
	}

	return 0;
}