#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char name[7];		// �̸�
	int grade;			// �г�
	char major[7];		// �а�

	int ch;

	//step1. ���� ��ü ����
	FILE* fp;

	//step2. ���� ����
	fp = fopen("c:\\sample\\student.txt", "rt");
	if (fp == NULL) {
		printf("���� ���� ����!!\n");
		return 0;
	}

	//step3. ���� �۾�
	while (1) {
		ch = fscanf(fp, "%s %d %s", name, &grade, major);
		if (ch == EOF) // EOF = End Of File, ������ ���� ��Ÿ��
			break;
		printf("%s %d %s \n", name, grade, major);
	}

	//step4. ���� �ݱ�
	fclose(fp);

	return 0;
}