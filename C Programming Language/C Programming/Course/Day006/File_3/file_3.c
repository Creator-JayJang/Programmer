#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// step1. 파일 객체 생성
	FILE* fp; 

	// step2. 파일 개방
	fp = fopen("C:\\sample\\b.txt", "wt");
		if (fp == NULL) {
			printf("b.txt 파일 열기 실패!!");
			return 0;
		}

	// step3. 파일 작업
	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong Gil Dong \n", fp);
	fputs("Your name is Lee Sun sin \n", fp);


	// step4. 파일 닫기
	fclose(fp);

	return 0;
}