/*
	�� ���� ������ �Է¹޾� �־��� ���ǰ� ������Ŀ� �°� ��µǵ��� ���α׷��� �����Ͻÿ�.

	<�Է�����>
	ù��° �� =
	�ι�° �� =
	����° �� =

	<�������>
	�ִ밪 >= �߾Ӱ� >= �ּҰ�

	<ó������>
	1. �Է¹޴� ���� num1, num2, num3�� �̿��ϰ�, �ӽñ����ҷ� ����� ���� tmp�� �̿��� ��.
	2. ��º����� num1 >= num2 >= num3�� �������� ��µǵ��� ������ ��

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ���� 
	int num1, num2, num3, tmp;

	// �Է¹�
	printf("ù��°�� =");
	scanf("%d", &num1);
	printf("�ι�°�� =");
	scanf("%d", &num2);
	printf("����°�� =");
	scanf("%d", &num3);

	// ó����
	/*
		���� ���� ū ���� num1�� �ƴ϶��, num2 or num3 �� ū ���϶�
	*/

	if (num2 > num1 && num2 > num3) {//num2�� ���� ū���� ���Դٸ�
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	else if (num3 > num1 && num3 > num2) { //num3�� ���� ū���� ���Դٸ�
		tmp = num1;
		num1 = num3;
		num3 = tmp;
	}
	// else {}

	if (num3 > num2) {//�ι�°�� ū ���� ���� num3�̶��
		tmp = num2;
		num2 = num3;
		num3 = tmp;
	}


	// ��¹�
	printf("%d >= %d >= %d\n", num1, num2, num3);

	return 0;
}