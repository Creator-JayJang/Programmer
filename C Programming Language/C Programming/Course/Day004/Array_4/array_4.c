/* 
	1  2  3  4  5	--> 1�� : 1ĭ 2ĭ 3ĭ 4ĭ 5ĭ
	6  7  8  9  10	--> 2�� : 1ĭ 2ĭ 3ĭ 4ĭ 5ĭ
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int data[5][5] = 0; // �迭�� �ʱ�ȭ
	int num	= 0;		// ������ ����

	// �迭�� ���ڸ� �����ϴ� ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			//num++;
			data[i][j] = ++num;

		}
	}

	// �迭�� ��Ҹ� ����ϴ� ���� 

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", data[i][j]);

		}
		printf("\n");
	}

	return 0;
}