/*
	���� ���α׷�
	�� ���� ������ �ϳ��� �����ڸ� �Է¹޾� �ش� ������ ����� ������ �� ����� ����ϴ� ���α׷��� �����Ͻÿ�.

	<�Է� �� �������>
	ù��° �� =
	������(+,-,*,/,%) = 
	�ι�° �� =

	<ó������>
	1. �־��� ������ �̿��� ���� ������ �ٽ� �Է¹޵��� �����Ѵ�.
	2. �����ڰ� '/'�̰�, �ι�° ���� 0�� �ԷµǸ� �ι�° ���� �ٽ� �Է¹޵��� �����Ѵ�.
	3. ��Ÿ ������ ���α۷��� �帧�� �°� ������ ��.

	<����>
	�Է¹����� ���� �Էµ��� ���� �Է��Լ��� ���� �����Ѵ�.
	�Է��Լ�(scanf)�� �Է� �� ����(Enter)�� �ľ� �Է��� �Ϸ�ǵ��� ó���Ѵ�.

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int su1, su2, res; // �Է¹��� �ΰ��� ������ ������� ����� ����
	char op; // ������
	
	// �Է¹�
	printf("ù��° �� = ");
	scanf("%d", &su1);
	
	getchar(); //���͸� �ɷ��ش�

	do {
		printf("������(+,-,*,/) = ");
		scanf("%c", &op);
		getchar();
	} while (op != '+' && op != '-' && op != '*' && op != '/');

	do {
		printf("�ι�° �� = ");
		scanf("%d", &su2);
	} while (op == '/' && su2 == 0);

	// ó����
	switch (op) {
	case '+': res = su1 + su2; break;
	case '-': res = su1 - su2; break;
	case '*': res = su1 * su2; break; 
	case '/': res = su1 / su2; break;
	}


	// ��¹�
	printf("%d %c %d = %d\n", su1, op, su2, res);

	return 0;
}