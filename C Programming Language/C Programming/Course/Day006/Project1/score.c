/*
   ���� ó�� ���α׷�

   <�Է� �� �������>
   == ���� ���� ���α׷� ==
   1. �л����
   2. �л��˻�
   3. �л�����
   4. �л�����
   5. �۾�����
   ======================
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int a[5] = { 10, 20, 30, 40, 50 };
	int b[4] = { 0 };
	int value;
	int index;		// ������ ���� ��ġ�� �����ϴ� ����

	printf("a�迭�� ũ�� = %d\n", sizeof(a));

	printf("������ ��(10~50) = ");
	scanf("%d", &value); // 30

	for (int i = 0; i < 5; i++) {
		if (a[i] == value) { // ������ ���� ã�Ҵٸ�
			//a[i] = 0;
			index = i; // 2

			break;
		}
	}

	for (int i = 0; i < 5; i++) {
		if (i < index)
			b[i] = a[i];
		/*
		  b[0] == a[0]
		  b[1] == a[1]
		  b[2] == a[3]
		*/
		else
			b[i] = a[i + 1];
	}

	printf("a�迭�� ũ�� = %d\n", sizeof(a));
	return 0;
}