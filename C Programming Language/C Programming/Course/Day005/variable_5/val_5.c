/* 
	���������� ���������� �̸��� ���� �� ���������� �켱��!
*/

#include<stdio.h>

int add(int val);	// ��������
int num = 1;

int main() {
	int num = 5;	// ��������

	printf("num = %d\n", add(num));	//14
	printf("num = %d\n", num+9);	//14 scope ������


	return 0;
}


int add(int val) {
	int num = 9;	// ��������
	num += val;

	 return num;
}
