/*
	���迬���� : �� ���� ��Ұ��踦 ����ϴ� ������
	- ������ ����� ��(true, 1) �Ǵ�, ���� (false, 0)���� ����ȴ�.
	- ������ ������ �¿��� ��� ����ȴ�.
	- ���� : >, >=, <, <=, ==, !=
*/

#include<stdio.h>

int main() {
	// ����
	int num1 = 10, num2 = 12;
	int res1, res2, res3;

	// �Է¹�

	// ó����

	res1 = num1 == num2; // 0
	res2 = num1 <= num2; // 1
	res3 = num1 > num2; // 0

	// ��¹�
	printf("res1 = %d, res2 = %d, res3 = %d\n", res1, res2, res3);
	
	return 0;
}