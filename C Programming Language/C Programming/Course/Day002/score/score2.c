/*
	����ó�����α׷� 2�ܰ�
	����, ����, ���� ������ �Է¹޾� ������ ���, �׸��� ������ ����Ͽ� ����ϴ� ���α׷��� �����Ͻÿ�.

	<�Է�����>
	���� =
	���� =
	���� =

	<�������>
	���� : xx, ��� : xx.xx, ���� : xx

	<ó������>
	1. �־��� ��������Ŀ� �°� �����Ұ�
	2. ����� �Ҽ��� ���� ��°�ڸ����� ������ ��
	3. ������ ����� ������ �����ϵ�, A, B, C, D, F �� ǥ���� ��
	4. ������ ����� 90�� �̻��̸� 'A', ����� 80�� �̻��̸� 'B', ����� 70�� �̻��̸� 'C', ����� 60�� �̻��̸� 'D', �ܴ̿� 'F'�� ó���� ��.


*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int kor, eng, math, tot;
	float avg;
	char grade;

	// �Է¹�
	printf("���� = ");
		scanf("%d", &kor);
	printf("���� = ");
		scanf("%d", &eng);
	printf("���� = ");
		scanf("%d", &math);

	// ó����
	tot = kor + eng + math;
	avg = tot / 3.0f;
		if (avg >= 90) { grade = 'A'; }
		else if (avg >= 80) {grade = 'B';}
		else if (avg >= 70) { grade = 'C'; }
		else if (avg >= 60) { grade = 'D'; }
		else { grade = 'F'; }

	// ��¹�
	printf("����: %d, ��� : %.2f ���� : %c \n", tot, avg, grade);

	return 0;
}