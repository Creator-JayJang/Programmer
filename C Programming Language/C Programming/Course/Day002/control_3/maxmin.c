/*
	�� ���� ������ �Է¹޾� �ִ밪(max)�� �ּҰ�(min)�� ����ϴ� ���α׷��� �����Ͻÿ�.

	<�Է�����>
	ù��°�� = 
	�ι�°�� = 
	����°�� =

	<�������>
	�ִ밪 =
	�ּҰ� =
	������ =
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int num1, num2, num3, max, min, median;

	// �Է¹�
	printf("ù��°�� = ");
	scanf("%d", &num1);
	printf("�ι�°�� = ");
	scanf("%d", &num2);
	printf("����°�� = ");
	scanf("%d", &num3);

	// ó����
	/*if (num1 > num2) {
		max = num1;
		min = num2;
	}
	else {
		max = num2;
		min = num1;
	}
	*/

	/*
		�������� : ������ ������ ������ �����ϴ� ������
		- �ϳ��̻��� ���迬���ڸ� ��� ó���� �� ����ϴ� ������
		- AND(&&) : �ϳ��̻��� ������ ��� ���� �� ���̵ȴ�.
		- OR(||) : ��� ���� �� ����� �ϳ��� ���̸� ����� ���̵ȴ�. 
	*/

	// ���� ū ���� ���� ã�Ƴ��� �۾�
	if (num1 > num2 && num1 > num3) {
		max = num1;
		// ���� ���� ���� ã�Ƴ��� �۾�
		if (num2 > num3) {
			min = num3, median = num2;
		}
		else {
			min = num2; median = num3;
		}
	}
	else if(num2 > num1 && num2 > num3) {
		max = num2;
		// num2�� ������ �� ���� ���� ���� ã�Ƴ��� �۾�
		if (num1 > num3) {
			min = num3; median = num1;
		}
		else {
			min = num1; median = num3;
		}
	}
	 else {
		max = num3;
		// num3�� ������ �� ���� ���� ���� ã�Ƴ��� �۾�
		if (num1 < num2) {
			min = num1; median = num2;
		}
		else {
			min = num2; median = num1;
		}
	}
	 
	// ��¹�
	printf("�ִ밪 = %d\n", max);
	printf("������ = %d\n", median);
	printf("�ּҰ� = %d\n", min);

	return 0;


}