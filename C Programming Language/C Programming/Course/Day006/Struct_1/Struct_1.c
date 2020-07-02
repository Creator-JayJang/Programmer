/*
  ����ü(struct) : ���� �ٸ� �ڷ����� �ϳ��� �̸����� ��� ����ϴ� �ڷᱸ��
  - ����� ���� �ڷ����� �ش��Ѵ�.
*/

#include<stdio.h>
#include<string.h> // strcpy, strcmp, strlen... ���ڿ��� ó���ϴ� �Լ�
#pragma warning(disable:4996)

// ����ü ����
typedef struct Student {
	// Member Field(����ʵ�)
	int sub[4];		// ����, ����, ����, ����
	char name[20];	// ������ 19����, �ѱ� 9����
	double avg;		// ���
}Student;

int main() {
	// ���� : ������ �ڷ����� �ʱⰪ�� �����ϴ� ����
	//struct Student stu;
	//typedef struct Student Student;
	Student stu;

	// �Է¹�
	stu.sub[0] = 90;
	stu.sub[1] = 87;
	stu.sub[2] = 88;
	//stu.name = "ȫ�浿";
	strcpy(stu.name, "ȫ�浿");

	// ó����
	stu.sub[3] = stu.sub[0] + stu.sub[1] + stu.sub[2];
	stu.avg = stu.sub[3] / 3.0;

	// ��¹�
	printf("%s���� ������ ������ �����ϴ�.\n", stu.name);
	printf("���� : %d, ��� : %.2lf\n", stu.sub[3], stu.avg);

	return 0;
}