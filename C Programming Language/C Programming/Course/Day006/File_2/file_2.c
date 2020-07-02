/*
	파일로부터 데이터를 읽어오는 작업
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	
	// step1. 파일 객체 생성
	FILE* fp;
	int ch;


	// step2. 파일 열기
	fp = fopen("C:\\sample\\a.txt", "rt");

	/*
		파일개발모드(Mode) : r, w, a(쓰기전용인데 뒤에 덧붙여라)
		rt/rb, wt/wb
		r+, w+, a+

	*/

	if (fp == NULL) {
		printf("a.txt 파일을 열기 실패!!");
		return 0;
	}

	// step3. 파일 작업
	for (int i = 0; i < 3; i++) {
		ch = fgetc(fp);
		printf("%c\n", ch);
	}


	// step4. 파일 닫기
	fclose(fp);

	return 0;
}