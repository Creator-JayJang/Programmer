/*
  ȭ���� ���� �����͸� �Է¹޾� ���Ͽ� ����ϴ� �۾�
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char name[10];		// �̸�
	int grade;			// �г�
	char major[20];		// �а�

	// step1. ���� ��ü ����
	FILE* fp;

	// step2. ���� ����
	fp = fopen("c:\\sample\\student.txt", "wt");

	// step3. ���� �۾�
	for (int i = 0; i < 3; i++) {
		printf("�̸� �г� �а������� �Է� : ");
		scanf("%s %d %s", name, &grade, major);
		getchar(); // ���ۿ� �����ִ� \n �����۾�
		fprintf(fp, "%s %d %s", name, grade, major);
	}

	// step4. ���� �ݱ�
	fclose(fp);

	return 0;
}