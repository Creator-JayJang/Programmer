/*
	Ű���带 ���� �̸��� ���� �׸��� ������ �Է¹޾� ����ϴ� ���α׷��� �����Ͻÿ�.
	<�Է�����>
	�̸� = ȫ�浿
	���� = 19
	���� = 178.9

	<�������>
	ȫ�浿 ���� ���̴� 19���̰� ������ 178.9 �̱���!!
	*/


#include<stdio.h>
#include<string.h> // ���ڿ��� ó���ϴ� �Լ��� �����ϰ� �ִ� ��� ����
// strcpy, 

#pragma warning(disable:4996) //scan �Լ��� �������� ������

int main() {

	// ����
	char name[80];	// �������� ���� �ʷ��� �� �ִ�.
	/* �迭���� �迭�� �����ּҸ� ���Ѵ�. */

	/*int age;
	double height; */

	// �Է¹�
	printf("�̸� = ");
	scanf("%s", name); // &name �̷������� �Ƚᵵ �� �ּҸ� �����ϰ� �־

	gets(name);
	/* ���ڿ��� ���Կ����ڸ� ����� �� ����.
		getchar(); -> get character,  �� ���ڸ� �Է¹޾ƶ�
		gets(); -> get string, ���ڿ��� �Է¹޾ƶ�
		*/

	//strcpy(name, gets());

	/*printf("���� = ");
	scanf("%d", &age);
	printf("���� = ");
	scanf("%lf", &height);*/


	// ó����

	// ��¹�
	//printf("%s���� ���̴� %d���̰� ������ %.1lf �̱���!!\n", name, age, height);
	printf("%s�� ȯ���մϴ�. !! \n", name);

	return 0;
}