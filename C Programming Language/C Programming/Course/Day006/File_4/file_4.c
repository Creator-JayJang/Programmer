#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char str[30];	// 문자열 상태로 읽어오기 위해
	int ch;

	// step1. 파일 객체 생성
	FILE* file = fopen("C:\\sample\\b.txt", "rt");

	// step2. 파일 열기
	if (file == NULL) {
		printf("b.txt 파일 열기 실패!!");
	}

	// step3. 파일 작업
	ch = fgetc(file);
	printf("%c\n", ch);
	ch = fgetc(file);
	printf("%c\n", ch);
	fgets(str, sizeof(str), file);
	printf("%s", str);
	fgets(str, sizeof(str), file);
	printf("%s", str);

	// step4. 파일 닫기
	fclose(file);


	// 출력문

	return 0;
}