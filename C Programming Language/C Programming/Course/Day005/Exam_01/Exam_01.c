#include<stdio.h>
#pragma warning(disable:4996)

void aaa(int *num) { // int *num = &num;
	/* 
		������ ������ ������ �ּҸ� �����ϴ� ����
		������ ������ ������ �� �Ϲݺ����� ����� �ٸ��� �ڷ���* ������; 
		
		�����Ϳ� ���õ� ������
		- * : ����������(��)
		- & : �ּҿ�����

	*/
	*num = 10;	// *�� ���� �ǹ��Ѵ�.
	printf("num = %d\n", num); // �ּ�
}

int main() {
	int num = 0;

	aaa(&num);
	printf("num = %d\n", num); // ��

	return 0;
}