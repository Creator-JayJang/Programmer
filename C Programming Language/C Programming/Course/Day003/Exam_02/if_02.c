/*
	������ �Է¹޾� ������ ����ϴ� ���α׷��� �����Ͻÿ�.
	������ 90�� �̻��̸� 'A', ������ 80�� �̻��̸� 'B', ������ 70�� �̻��̸� 'C', ������ 60�� �̻��̸� 'D',
	�� �ܿ��� 'F'�� ��µǵ��� �����Ͻÿ�.
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int jumsu;
	char grade;

	// �Է¹�
	printf("���� = ");
	scanf("%d", &jumsu);


	// ó����
	/*if (jumsu >= 90) 
		grade = 'A';
	else if (jumsu >= 80) 
		grade = 'B';
	else if (jumsu >= 70) 
		grade = 'C';
	else if (jumsu >= 60) 
		grade = 'D';
	else 
		grade = 'F';*/

	switch (jumsu/10) { // 10 9 8 7 6 5 4 3 2 1 0  //���߶�� ��Ⱑ ������ ������ ��� ��������. 
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}

	// ��¹�
	printf("���� : %c\n", grade);


	return 0;
}