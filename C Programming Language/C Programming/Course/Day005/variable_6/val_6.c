#include<stdio.h>

int func() {
	static int num1 = 0; 
	// �� ������ �ѹ��� ����, �ʱ�ȭ ���� ������ �ڵ����� 0���� �ʱ�ȭ�ȴ�. �������������� ���������� Ư���� ����
	int num2 = 0;
	num1++, num2++;

	printf("num1 = %d, num2 = %d\n", num1, num2);
}

int main() {
	int i;

	for (i = 0; i < 3; i++) {
		func();
	}
	return 0;
}