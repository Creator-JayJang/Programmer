#include<stdio.h>

	// �������� ����
	int num; // ���������� �ڵ����� 0���� �ʱ�ȭ �ȴ�.

	// �Լ� �����
	void func(int val);

	int main() {
		printf("num = %d\n", num); // 0
		
		func(3); // call by value, ���� ���� ȣ��

		printf("num = %d\n", num); // 3

		num++;	// 3 
		printf("num = %d\n", num); // 4

		return 0;
	}

	// �Լ� ���Ǻ�
	void func(int val) {
		num += val; // 3
	}