/*
	파일(File) 입출력
	1. 파일(File) : 보조기억장치에 저장되는 최소단위
	
	2. 스트림(Stream) 객체 : 통로
		- Input Stream : 입력객체
		- Output Stream : 출력객체
	
	3. File 구조체
		typedef struct File{
		// 파일이 저장된 주소
		// 파일의 형식
		// 파일의 내용
		// 파일 버퍼의 내용
		....
		}File;

	4. 파일 형식 또는 파일의 종류
		- 텍스트 파일(Text File) : *.txt, *.doc
		- 바이너리 파일(Binary File) : *.hwpw, *.jpge,....(대부분)

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// step1. 파일 객체 생성(구조체)
	FILE* fp;

	// step2. 파일 객체 생성 용도 - 출력객체/입력객체
	
	fp = fopen("C:\\sample\\a.txt", "wt");

	/*
		r(read only) : 읽기 전용
		rt	/ rb	text/binary

		w(write only) : 쓰기 전용
		wt	/	wb 
		a(append) : 파일 뒤에 추가
	*/

	if (fp == NULL) {
		printf("a.txt 파일이 존재하지 않습니다.\n");
		return 0;	//프로그램 종료
	}

	printf("a.txt 파일이 열렸습니다. \n");

	//step 3. 파일 작업
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

		//step. 4 파일 객체 닫기 

	fclose(fp);

	return 0;
}