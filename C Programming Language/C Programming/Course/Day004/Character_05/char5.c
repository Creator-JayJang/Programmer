/* 
	ǥ�� ����� �Լ� : printf(), scanf()
	���� ���� ����� �Լ� : putchar(), getchar()
	���ڿ� ���� ����� �Լ� : puts(char �迭��), gets(char �迭��)
*/


#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main() {
	
	//int a, b;
	char pass[10]; // ���ڿ��� ũ�� +1, 10 byte(9 byte) - ������ 9����, �ѱ� 4����

	//printf("���� �ΰ� =");
	//scanf("%d %d", &a, &b);

	printf("10������ ���ڿ� =");
	//scanf("%s", pass);
	gets(pass);

	/* 
		c++ : getline(), cin_getline() --> c����� ������ �غ��ϱ� ����
	*/

	printf("�Էµ� ���ڿ� : %s\n", pass);


	//printf("a = %d, b = %d\n", a, b);

	
	// ����

	

	// �Է¹�

	// ó����

	// ��¹�

	return 0;
}