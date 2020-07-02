/*
	단순 if문
*/

#include<stdio.h>

int main() {
	int num = +5;

	if (num > 0) {
		printf("%d는 양수입니다. \n", num);
	}
	else {
		printf("%d는 음수입니다. \n", num);
	}

	printf("프로그램을 종료합니다. \n");

	return 0;
}