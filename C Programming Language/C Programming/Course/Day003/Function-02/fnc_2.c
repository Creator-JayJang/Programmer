/*
	1. �Լ��� ���� ����
		�Լ����� => �Լ�ȣ�� => �Լ� ����
*/

/*
	�� ���� ������ �Է¹޾� �� ���� ����Ͽ� ����ϴ� ���α׷��� �����Ͻÿ�.
*/


#include<stdio.h>
#pragma warning(disable:4996)


// �Լ� �����
int adder(int x, int y); // �Ű�����(���μ� = ��¥ ����)

int main() {
	
	adder(); // Call by name, �̸��� ���� ȣ��
	return 0;
}

void adder() {
	// ����
	int num1, num2, sum;

	// �Է¹�
	printf("��1 =");
	scanf("%d", &num1);
	printf("��2 =");
	scanf("%d", &num2);

	// ó����
	sum = adder(num1, num2); // Call by value, ���� ���� ȣ��

	// ��¹�
	printf("%d + %d = %d\n", num1, num2, sum);
	//return; ��������

}

int adder(int x, int y); {
	return x + y;
}
