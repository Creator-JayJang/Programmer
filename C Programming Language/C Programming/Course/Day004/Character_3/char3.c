/*
	���ڿ��� ó���ϴ� �Լ� : string.h 
	1. strcoy : ���ڿ��� ����
		strcoy(�纻, ����); ������ ������ �̿��Ͽ� ���纻�� �����.
	
	2. strcmp : ���ڿ��� ��
		strcmp (���1, ���2); ���1�� ���2�� ���Ͽ� �� ����� ���Ͻ����ִ� �Լ�
		0 : �� ����� ���ڿ��� ��ġ�Ѵ�.
		1 : ���������� ���1�� ���2���� �ռ���. ��~, ��~
	    ->> 	-1 

	3. strlen : ���ڿ��� ����
		strlen(���ڿ�) : ���ڿ��� ���̸� �������ش�.
*/


#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main() {

	char str1[80] = "tiger";  //���ڿ��� ������ �׻� ũ�� ��ƾ��ؼ� �������� ���� �� �� �ִ�.
	char str2[80];

	// str2 �ڸ��� pinkpig�� ���ڿ��� ����
	strcpy(str2, "tiger"); // str2 = " pinkpig ";

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	if (strcmp(str1, str2) == 0) {
		printf("str1�� str2�� ���� �����Դϴ�. \n");
	}
	else {

		printf("str1�� str2�� ���� ���ڰ� �ƴմϴ�. \n");
	}


	// ����

	// �Է¹�

	// ó����

	// ��¹�

	return 0;
}