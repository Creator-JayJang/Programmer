#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// step1. ���� ��ü ����
	FILE* fp; 

	// step2. ���� ����
	fp = fopen("C:\\sample\\b.txt", "wt");
		if (fp == NULL) {
			printf("b.txt ���� ���� ����!!");
			return 0;
		}

	// step3. ���� �۾�
	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong Gil Dong \n", fp);
	fputs("Your name is Lee Sun sin \n", fp);


	// step4. ���� �ݱ�
	fclose(fp);

	return 0;
}