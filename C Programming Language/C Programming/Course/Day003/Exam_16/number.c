/*
	1���� 100���� �ڿ����� ��µǴ� ���α׷��� �����Ͻÿ�.
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����

	// �Է¹�

	// ó����

	// ��¹�

	int cnt = 0;	// Ȧ���� ������ ������ ����


	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) continue;
		printf("%5d", i);
		cnt++; // cnt = cnt + 1; cnt += 1;
			if (cnt % 5 == 0); printf("\n");


		//if(i % 10 == 0) printf("\n");
	}

	return 0;
}