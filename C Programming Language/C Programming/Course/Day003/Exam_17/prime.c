/*
	1���� 100������ �ڿ��� �� �Ҽ��� �ش��ϴ� ���� ����ϴ� ���α׷��� �����Ͻÿ�.
	��, �� �ٿ� 5������ ��µǵ��� ������ ��.

	<��Ʈ>
	�Ҽ�(prime) : 1�� �ڱ� �ڽ����θ� ������ �������� ��

*/

// �ϳ��� ���ڸ� �Է¹޾� �Ҽ����� �ƴ��� �����ϴ� ���α׷��� �����Ͻÿ�.


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int cnt = 0;	// Ȧ���� ������ ������ ����
	int number;

	for (int i = 1; i <= 100; i++) {
		for (int a = 1; a <= number; a++) {
			if (number % a == 0) continue;
			printf("%5d", i);
			//cnt++; // cnt = cnt + 1; cnt += 1;
			//if (cnt % 5 == 0); // printf("\n");
		}
	}
	return 0;
}

//int main() {
//	
//	// ����
//	int number;
//
//	// �Է¹�
//	printf("2�̻��� ������ �Է��ϼ���.");
//	scanf("%d", &number);
//
//	for (int i = 1; i <= number; i++) {
//		if (number % i == 0) {
//			return 0;
//		}
//	}
//	return 0;
//}


	
	//// ó����
	//for (int i = 2; i < number; i++) {
	//	if (number % i == 0) {


	//		printf("�Ҽ��� �ƴ�\n");	
	//		return 0;
	//	
	//	}
	//}


//	//// ��¹�
//	return 0;
//}