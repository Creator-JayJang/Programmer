/*
	���� ó�� ���α׷� 1�ܰ�
	����, ����, ���������� �Է¹޾� ������ ����� ����Ͽ� ����ϴ� ���α׷��� �����Ͻÿ�.
	��, �־��� ����� ���Ŀ� �°� ������ ��.

	<�Է�����>
	���� =
	���� = 
	���� = 

	<�������>
	���� : xx ��, ��� : xx.xx ��

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����

	int kor, eng, math, tot;
	float avg;

	// �Է¹�

	printf("���� =");
	scanf("%d", &kor);
	printf("���� =");
	scanf("%d", &eng);
	printf("���� =");
	scanf("%d", &math);

	// ó����
	tot = kor + eng + math;
	avg = tot / 3.0f;

	// ��¹�
	printf("\n ���� : %d ��, ��� : %.2f ��\n", tot, avg);

	return 0; // �ý��� ����
}
