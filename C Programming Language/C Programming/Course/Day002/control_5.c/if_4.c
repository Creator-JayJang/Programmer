/* 
	�ֹε�Ϲ�ȣ : 123455-abcdefg
	������� : 12/34/56
	�������� : a
				- 1800��� : 0(��), 9(��)
				- 1900��� : 2(��), 1(��)
				- 2000��� : 4(��), 3(��)
	������� : b
				- 0 : ����, ���
				- 1 : ��õ, ����
				- 2 : ����, �泲
				- 3 : ���
				- 4 : ���
				- 5 : �泲
				- 6 : ����
				- 7 : ����
				- 9 : ����
	�ֹε�Ϲ�ȣ 8��°�� ���ڸ� �Է¹޾� �ش� ����� ������ ����⵵�� ����ϴ� ���α׷���
	�����Ͻÿ�.

	<�Է�����>
	8��° ���� �ϳ� = 
	
	<�������>
	����⵵ : xxxx�⵵
	���� : ���� or ����
	
	<ó������>
	1. �������� 
		������ ���� : jumincode, year, gender
	2. �־��� ����� ���Ŀ� �°� ������ ��.
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int jumincode, year, gender;

	// �Է¹�
	printf("8��° �����ϳ� = ");
	scanf("%d", &jumincode);
	gender = jumincode;

	// ó����
	if(jumincode == 0 || jumincode == 9 )
		year = 1800;
	else if (jumincode == 2 || jumincode == 1)
		year = 1900;
	else
		year = 2000;

	// ��¹�
	printf("����⵵= % d\n", year);
	if (gender % 2 == 0) {
//		printf("����⵵= % d\n", year);
		printf("����= ����\n");
	}
	else {
		printf("����= ����\n");
	}

	return 0;
}