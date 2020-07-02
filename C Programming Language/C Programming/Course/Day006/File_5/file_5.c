/*
  화면을 통해 데이터를 입력받아 파일에 출력하는 작업
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char name[10];		// 이름
	int grade;			// 학년
	char major[20];		// 학과

	// step1. 파일 객체 생성
	FILE* fp;

	// step2. 파일 열기
	fp = fopen("c:\\sample\\student.txt", "wt");

	// step3. 파일 작업
	for (int i = 0; i < 3; i++) {
		printf("이름 학년 학과순으로 입력 : ");
		scanf("%s %d %s", name, &grade, major);
		getchar(); // 버퍼에 남아있는 \n 제거작업
		fprintf(fp, "%s %d %s", name, grade, major);
	}

	// step4. 파일 닫기
	fclose(fp);

	return 0;
}