/*
	shift ������ : �������� �ڷ��̵�

	1. ����
		- Left Shift : �������� �־��� ��Ʈ����ŭ �̵�, ��ĭ�� 0���� ä���. <<
		  �� �� * 2 ^ �̵���Ʈ��
		
		- Right Shift : >>
	      �� �� / 2 ^ �̵���Ʈ��

	2. 
	<<
	>>
*/

#include<stdio.h>

int main() {

	int su1 = 8;  // 1000
	int su2 = 1;  // 0001
	int res1, res2;

	res1 = su1 >> 3; // 0001 = 1, 8/ 2^3
	res2 = su2 << 3; // 1000 = 8, 1*2^3

	printf("res1 = %d, res2 = %d\n", res1, res2);

	return 0;
}