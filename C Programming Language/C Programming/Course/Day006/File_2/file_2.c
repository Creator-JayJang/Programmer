/*
	���Ϸκ��� �����͸� �о���� �۾�
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	
	// step1. ���� ��ü ����
	FILE* fp;
	int ch;


	// step2. ���� ����
	fp = fopen("C:\\sample\\a.txt", "rt");

	/*
		���ϰ��߸��(Mode) : r, w, a(���������ε� �ڿ� ���ٿ���)
		rt/rb, wt/wb
		r+, w+, a+

	*/

	if (fp == NULL) {
		printf("a.txt ������ ���� ����!!");
		return 0;
	}

	// step3. ���� �۾�
	for (int i = 0; i < 3; i++) {
		ch = fgetc(fp);
		printf("%c\n", ch);
	}


	// step4. ���� �ݱ�
	fclose(fp);

	return 0;
}