/*
���������� : 1�� �����ϰų� �����ϴ� ������, ++/--
	- ���������� : ++a, --b
	- ���������� : a++, b--
	- ������������ ��������� ���Կ�����(=)���� �ʴ�.
*/

#include<stdio.h>

int main() {
	int num1 = 10;
	int num2 = (num1--)+2;

	printf("num1 = %d, num2 =%d\n", num1, num2); // 9 12
	// printf("num1 = %d, num2 =%d\n", ++num1, num2++); // 13, 12 
	
	return 0;
}