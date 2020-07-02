#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char name[7];		// 이름
	int grade;			// 학년
	char major[7];		// 학과

	int ch;

	//step1. 파일 객체 생성
	FILE* fp;

	//step2. 파일 열기
	fp = fopen("c:\\sample\\student.txt", "rt");
	if (fp == NULL) {
		printf("파일 열기 실패!!\n");
		return 0;
	}

	//step3. 파일 작업
	while (1) {
		ch = fscanf(fp, "%s %d %s", name, &grade, major);
		if (ch == EOF) // EOF = End Of File, 파일의 끝을 나타냄
			break;
		printf("%s %d %s \n", name, grade, major);
	}

	//step4. 파일 닫기
	fclose(fp);

	return 0;
}