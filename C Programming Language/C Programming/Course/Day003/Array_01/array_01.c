/*
	�迭(Array)
	1. ����
		- ������ �ڷ����� �ϳ��� �̸����� ��� �����ϴ� �ڷᱸ��
		- �ڷᱸ�� : �ڷ�(data)�� �����ϰ� �����ϰ� �ʿ信 ���� ȣ���ؼ� ����ϴ� ��� ������ �ٷ�� ��
		  ���� : �ϳ��� ����� �����ϴ� ������
		  �迭(array) :  
		  ����ü(struct) : 
		  Ŭ����(class) : C++/���� ����ü�� Ȯ���� ����
	
	2. �迭�� ���� �Ǵ� Ư¡
		- ��� ����� ���� �ּ�ȭ �Ѵ�.
		- ���ӵ� ������ �����͸� ��� ������ �а� ���� �ӵ��� ������.
		- ���籸���� �����Ǿ� �ݺ���(for)�� ����� �� �ִ�. - �ڵ��� ȿ����

	3. �迭�� ���� - 1���� �迭 / 2���� �迭
		1) ����
			�ڷ��� �迭�� [�迭�� ÷�� = ũ��];
			or
			�ڷ��� �迭�� [3] = {10, 20, 30};
			or
			�ڷ��� �迭�� [] = {10, 20, 30};
			or
			�ڷ��� �迭�� [3] = {10, 20}; ��ĭ�� ������ 0���� ä������.
			or
			�ڷ��� �迭�� [3] = {10, 20, 30, 40}; Error
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����

	int a, b, c; // 4 byte * 3 = 12 byte
	int x[3];	// 4 byte * 1 = 4 byte
 

	// �Է¹� : �Ҵ�
	/*a = 10;
	b = 20;
	c = 30;
	*/
	
	x[0] = 10;
	x[1] = 20;
	x[2] = 30;

	// ó����

	// ��¹�
	printf("int�� ũ�� = %d\n", sizeof(int));
	//printf("a�� �ּ� = %d, a�� �� = %d\n", &a, a);
	//printf("b�� �ּ� = %d, a�� �� = %d\n", &b, b);
	//printf("c�� �ּ� = %d, a�� �� = %d\n", &c, c);
	/*printf("x[0]�� �ּ� = %d, x[0] �� = %d\n", &x[0], x[0]);
	printf("x[1]�� �ּ� = %d, x[1] �� = %d\n", &x[1], x[1]);
	printf("x[2]�� �ּ� = %d, x[2] �� = %d\n", &x[2], x[2]);*/

	for (int i = 0; i <= 2; i++)
	{
		printf("x[1]�� �ּ� = %d, x[1] �� = %d\n", &x[i], x[i]);
	}
	return 0;
}