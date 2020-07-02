/* 
	문자열 처리
	표준 입력 함수 : scanf() - 공백을 처리하지 못한다.
					 gets()
					 fgets(문자배열, 크기, 표준 입력 객체)


*/


#include<stdio.h>
//#pragma warning(disable:4996)

int main() {
	char words[11]; // 80byte - 영문 10자, 한글 5자

	printf("문자열 = ");
	//scanf("%s", words); -- 공백 처리를 할 수 없다.
	//gets(words);
	fgets(words, sizeof(words), stdin);

	printf("입력문자열 : %s\n", words);
	//scanf("%s", words);
	//printf("입력버퍼에 남아있는 문자열 : %s\n", words);


	return 0;
}