/*
  3���� ������ �Է¹޾� ������ ����� ����Ͽ� ����ϴ� ���α׷��� �����Ͻÿ�.
  �� ���ǵ� ����ü Student�� Ȱ���� ��.
*/

#include<stdio.h>
// ����ڿ� ���� ���ǵ� ������� �߰�
#include"student.h"
// scanf�Լ��� ���ȼ��˻� ����
#pragma warning(disable:4996)

int main() {
	// ����
	//int kor, eng, math, tot;
	//double avg;
	//char name[20];

	// ����ü������
	//Student stu; // ������ �ڷ����� �ϳ��� �̸����� ��� ����(�迭)
	//Student stu2;
	//Student stu3;

	Student stu[3];
	/* stu[0]�� �л�, stu[1]�� �л�, stu[2]�� �л� */

	// �Է¹�
	for (int i = 0; i < 3; i++) {
		printf("�̸� = ");
		scanf("%s", &stu[i].name);
		printf("���� = ");
		scanf("%d", &stu[i].kor);
		printf("���� = ");
		scanf("%d", &stu[i].eng);
		printf("���� = ");
		scanf("%d", &stu[i].math);

		stu[i].tot = stu[i].kor + stu[i].eng + stu[i].math;
		stu[i].avg = stu[i].tot / 3.0;
	}

	// ó����
	/*for (int i = 0; i < 3; i++) {
		stu[i].tot = stu[i].kor + stu[i].eng + stu[i].math;
		stu[i].avg = stu[i].tot / 3.0;
	}*/

	// ��¹�
	for (int i = 0; i < 3; i++) {
		printf("%s�� ��������� ������ �����ϴ�.\n", stu[i].name);
		printf("���� = %d, ��� = %.2lf\n", stu[i].tot, stu[i].avg);
	}
	return 0;
}