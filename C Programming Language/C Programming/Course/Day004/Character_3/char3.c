/*
	문자열을 처리하는 함수 : string.h 
	1. strcoy : 문자열을 복사
		strcoy(사본, 원본); 원본의 내용을 이용하여 복사본을 만든다.
	
	2. strcmp : 문자열을 비교
		strcmp (대상1, 대상2); 대상1과 대상2를 비교하여 그 결과를 리턴시켜주는 함수
		0 : 두 대상의 문자열이 일치한다.
		1 : 사전순으로 대상1이 대상2보다 앞선다. ㅎ~, ㅂ~
	    ->> 	-1 

	3. strlen : 문자열의 길이
		strlen(문자열) : 문자열의 길이를 추출해준다.
*/


#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main() {

	char str1[80] = "tiger";  //문자열은 공간을 항상 크게 잡아야해서 기억장소의 낭비가 될 수 있다.
	char str2[80];

	// str2 자리에 pinkpig의 문자열을 대입
	strcpy(str2, "tiger"); // str2 = " pinkpig ";

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	if (strcmp(str1, str2) == 0) {
		printf("str1과 str2는 같은 글자입니다. \n");
	}
	else {

		printf("str1과 str2는 같은 글자가 아닙니다. \n");
	}


	// 선언문

	// 입력문

	// 처리문

	// 출력문

	return 0;
}