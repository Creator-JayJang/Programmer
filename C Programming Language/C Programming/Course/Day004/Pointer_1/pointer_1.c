/* 
	������(pointer) : �޸�(�ּ�)�� ����Ű�� ���� ��  --> �迭�� ����
	- ����(variable) : ���(��, data)�� �����Ѵ�. 
		int x;

	- ������ ����(pointer variable) : �ּҸ� �����Ѵ�.
		int *p;
		or
		int *p;
		
	- ������
		�ּҿ����� or ���������� : &
		���������� : *

	- �����ʹ� ������ �����ϴ�. ��, sizeof(), +,-,++,--

*/

#include<stdio.h>

int main() {
	int x = 100; // ������ ����
	int* px = &x;

	printf("x = %d\n", x);
	printf("x�� �ּ� = %d\n", &x);
	printf("x�� �ּ� = %d\n", px);
	printf("x�� �� = %d\n", *px); // * 1. ���� - ������ ���� 2. ���� �ٲپ��

	return 0;
}