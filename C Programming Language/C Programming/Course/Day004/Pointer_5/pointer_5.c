/*
	�����͸� �̿��� ���ڿ� ó��
*/


#include<stdio.h>

int main() {
	char* names = "brown";

	printf("�̸� : %s\n", names);

	names = "banana";
	printf("�̸� : %s\n", names);

	// ���ڿ� ����� ������ ������ �ǹ̸� ���� �� �ִ�.
	/* char names[] == "banana"; */
	while (*names != '\0')  {
		//printf("%c", *names);
		putchar(*names); 
		names++;
	}


	return 0;
}