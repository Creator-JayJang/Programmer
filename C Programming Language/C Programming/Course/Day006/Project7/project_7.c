#include<stdio.h>
#pragma warning(disable:4996)

typedef struct Student {
	char name[20];			// �̸�
	int id;					// �й�
	int kor, eng, math;		// ����, ����, ����

}Student;


int main() {
	Student s1 = {"aaa",1234,90,88,77};
	Student* sp;	// ������ ����
	sp = &s1;


	// ����

	// �Է¹�

	// ó����

	// ��¹�

	printf("�̸� : %s\n", s1.name);
	printf("�й� : %d\n", sp->id);
	//printf("�й� : %d\n", (*sp).id);

	return 0;
}