#include<stdio.h>

int main() {
	//char str[] = "APPLE";
	//char* p;

	//p = str; // p = &str[0]

	printf("apple 문자열이 저장된 시작주소 = %d\n", "apple");
	printf("apple 문자열에서 a의 값을 추출 = %c\n", *"apple");
	printf("apple 문자열에서 두번째 위치의 p의 주소 = %d\n", "apple" + 1);
	printf("apple 문자열에서 두번째 위치의 p의 주소 = %c\n", *("apple" + 1));


	return 0;
}