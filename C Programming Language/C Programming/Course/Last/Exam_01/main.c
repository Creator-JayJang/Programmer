#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

#include"Student.h"
#include"process.h"

int main() {
	int menu;

	while (1) {
		// �޴����
		mainMenu();
		printf("menu = ");
		scanf("%d", &menu);

		switch (menu) {
		case 1: // �л����
			addStudent();
			break;
		case 2: // �л��˻�
			findStudent();
			break;
		case 3: // ��ü���
			showAllStudent();
			break;
		case 4: // ��������
		case 5: // �۾�����
			printf("���α׷��� �����մϴ�.\n");
			return 0;
		default: printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n");
		}
	}

	return 0;
}