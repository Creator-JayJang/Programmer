/*
   � ȸ�簡 ������ �޿��� ������ �������� �޿����� ���α׷��� �����Ϸ��� �Ѵ�.
   ���� ��� ������ ������ ����̴�.
   �� �̻��� ������ ���� �޿��� ������ �� �ֵ��� ���α׷��� ������ ��.
   <�Է� �� �������>
   == �������� ���α׷� ==
   1. �������
   2. ���޵� �޿� ���� ���
   3. ��ü�����޿����� ���
   4. ���α׷� ����
   =====================
   �޴� =

   <ó������>
   1. ������ ��üȭ�ϴ� ����ü Permament�� �����϶�.
	  ����ʵ�δ� ������ �̸��� �޿��� ���´�.
   2. �� ��ɺ� �Լ��� �����϶�.
   3. ��Ÿ ������ ������Ŀ� �°� ���α׷��� ���۵ǵ��� �����϶�.
*/

#include<stdio.h>
#pragma warning(disable:4996)

// ����ü ����

typedef struct Employee {
	char name[20];
	int salary;
}Permament;

Permament emp[100];     // 100���� ������ ������ ����
int index = 0;          // ����� ��ġ��

// �Լ� �����
void addEmployee();     // ��������� ó���� �Լ�
void totSalary();       // ���޵� �����޿��� ������ ó���� �Լ�
void disp();            // ���� �޿������� ����� �Լ�

int main() {
		Permament p[5];

		while (1) {
			printf("�� = ");
			scanf("%d", &p[100]);

			if (p[index] == 0) break;
			index++;
		}

		for (int i = 0; i < index; i++) {
			sum += p[i];
		}

		/*for (int i = 0; i < 5; i++) {
			printf("%s : %d\n", p[i].name, p[i].salary);
		}*/

		disp(p);

		return 0;

	}

	void disp(Permament* p) {
		for (int i = 0; i < 100 ; i++) {
			printf("%s : %d\n", p->name, p->salary);
			p++;
		}
	}