#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char str[30];	// ���ڿ� ���·� �о���� ����
	int ch;

	// step1. ���� ��ü ����
	FILE* file = fopen("C:\\sample\\b.txt", "rt");

	// step2. ���� ����
	if (file == NULL) {
		printf("b.txt ���� ���� ����!!");
	}

	// step3. ���� �۾�
	ch = fgetc(file);
	printf("%c\n", ch);
	ch = fgetc(file);
	printf("%c\n", ch);
	fgets(str, sizeof(str), file);
	printf("%s", str);
	fgets(str, sizeof(str), file);
	printf("%s", str);

	// step4. ���� �ݱ�
	fclose(file);


	// ��¹�

	return 0;
}