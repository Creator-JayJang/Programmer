#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)

#include"Student.h"

// �������������
Student* stu[100];		// ����ü ������ �迭 ����
int index = 0;			// ����ο��� ī��Ʈ ����

// �Լ������
void findId();
void findName();
void addStudent();
void findStudent();
void showStudent(int index);
void showNameStudent(char* n);
void showAllStudent();

// ���θ޴�
void mainMenu(){
	printf("\n ==== �л����� ���α׷� ====\n");
	printf("1. �ű��л����\n");
	printf("2. �л������˻�\n");
	printf("3. ��ü�л����\n");
	printf("4. �л���������\n");
	printf("5. ���α׷�����\n");
	printf("----------------------------\n");
}

// �ű��л����
void addStudent() {
	char name[20];		// �̸�
	//char* curName;
	int id;				// �й�
	int kor, eng, math, tot;
	double avg;
	char grade;
	int flag = 1;		// �ݺ����θ� ������ ����

	//index++;

	printf("\n== �ű��л���� ==\n");
	printf("�й� = ");
	scanf("%d", &id);
		
	// �й��񱳷���
	/*if(index > 0){
		for (int i = 0; i <= index; i++) {
			if (stu[i]->id == id) {
				printf("\n�̹� ��ϵ� �й��Դϴ�.\n");
				break;
			}
		}		
	}*/
	printf("�̸� = ");
	scanf("%s", name);
	printf("���� = ");
	scanf("%d", &kor);
	printf("���� = ");
	scanf("%d", &eng);
	printf("���� = ");
	scanf("%d", &math);

	tot = kor + eng + math;
	avg = tot / 3.0;

	switch ((int)avg / 10) {
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}

	stu[index] = (Student*)malloc(sizeof(Student)); // �����Ҵ�
	stu[index]->id = id;
	//curName = (char*)malloc(strlen(name) + 1);
	strcpy(stu[index]->name, name);
	//stu[index]->name = name;
	stu[index]->kor = kor;
	stu[index]->eng = eng;
	stu[index]->math = math;
	stu[index]->tot = tot;
	stu[index]->avg = avg;
	stu[index]->grade = grade;
	index++;
	printf("\n�л������� ��ϵǾ����ϴ�.\n");
	return;
}

void findStudent() {
	int menu;

	printf("\n== �л������˻� ==\n");
	printf("1. �й��˻�\n");
	printf("2. �̸��˻�\n");
	printf("------------------\n");
	printf("���� = ");
	scanf("%d", &menu);

	if (menu == 1) {
		findId();
	}
	else if (menu == 2) {
		findName();
	}

	else {
		printf("������ �ùٸ��� �ʽ��ϴ�.\n");
		printf("���θ޴��� ���ư��ϴ�.\n");
	}
	return;
}

void findId(){
	int id;

	printf("\n �˻��� �л��� �й��� �Է����ּ���.\n");
	printf("�й� = ");
	scanf("%d", &id);

	for (int i = 0; i < index; i++) {
		if (stu[i]->id == id) {
			// �л��������
			showStudent(i);
			return;
		}
	}

	printf("�Է��� �й��� �л��� �������� �ʽ��ϴ�.\n");
	return;
}

void findName() {
	char name[20];

	printf("\n �˻��� �л��� �̸��� �Է����ּ���.\n");
	printf("�̸� = ");
	scanf("%s", name);

	for (int i = 0; i < index; i++) {
		if (strcmp(stu[i]->name, name) == 0) {
			// ���� �̸��� �л����� ���
			showNameStudent(name);
			return;
		}
	}

	printf("�Է��� �̸��� �л��� �������� �ʽ��ϴ�.\n");
	return;
}

void showStudent(int index) {
	printf("\n == �˻����� ==\n");
	printf("----------------------------------------------------------------\n");
	printf("%3d %10s %5d %5d %5d %5d %5.2lf %5c\n",
		stu[index]->id, stu[index]->name, stu[index]->kor, stu[index]->eng,
		stu[index]->math, stu[index]->tot, stu[index]->avg, stu[index]->grade);
	//printf("-------------------------------------------------\n");
	return;
}

void showNameStudent(char* n) {
	printf("\n == �˻����� ==\n");
	printf("----------------------------------------------------------------\n");
	for (int i = 0; i < index; i++) {
		if (strcmp(stu[i]->name, n) == 0) {
			printf("%3d %8s %5d %5d %5d %5d %5.2lf %5c\n",
				stu[i]->id, stu[i]->name, stu[i]->kor, stu[i]->eng,
				stu[i]->math, stu[i]->tot, stu[i]->avg, stu[i]->grade);			
		}		
	}
	return;
}

void showAllStudent() {
	printf("\n\t == ��ü�л�������� ==\n");
	printf("----------------------------------------------------------------\n");
	if (index >= 0) {
		for (int i = 0; i < index; i++) {			
			printf("%3d %10s %5d %5d %5d %5d %5.2lf %5c\n",
				stu[i]->id, stu[i]->name, stu[i]->kor, stu[i]->eng,
				stu[i]->math, stu[i]->tot, stu[i]->avg, stu[i]->grade);
			printf("--------------------------------------------------------\n");
		}
		return;
	}
	else {
		printf("��ϵ� �л��� �������� �ʽ��ϴ�.\n");
	}
	return;
}