/*
	�������� ����ϴ� ���α׷��� �����Ͻÿ�.
	����ڷκ��� �ܼ��� �Է¹޾� �ش� �ܼ��� �������� ����Ͻÿ�.
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int dan;
	int i;	// �����

	// �Է¹�
	printf("�ܼ� = ");
	scanf("%d", &dan);


	// ó����
	for (i = 1; i<=9; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}

	// ��¹�
	/*printf("%d x %d = %d\n", 7, 1, 7 * 1);
	printf("%d x %d = %d\n", 7, 1, 7 * 2);
	printf("%d x %d = %d\n", 7, 1, 7 * 3);
	printf("%d x %d = %d\n", 7, 1, 7 * 4);
	printf("%d x %d = %d\n", 7, 1, 7 * 5);
	printf("%d x %d = %d\n", 7, 1, 7 * 6);
	printf("%d x %d = %d\n", 7, 1, 7 * 7);
	printf("%d x %d = %d\n", 7, 1, 7 * 8);
	printf("%d x %d = %d\n", 7, 1, 7 * 9);*/

	return 0;
}