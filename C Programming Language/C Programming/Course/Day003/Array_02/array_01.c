/*
	�ټ����� ������ �Է¹޾� ���� ū ���� ã�� ����ϴ� ���α׷��� �����Ͻÿ�.
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	//// ����
	//int a, b, c, d, e, max;

	//// �Է¹�
	//printf("��1 = ");
	//scanf("%d", &a);
	//printf("��2 = ");
	//scanf("%d", &b);
	//printf("��3 = ");
	//scanf("%d", &c);
	//printf("��4 = ");
	//scanf("%d", &d);
	//printf("��5 = ");
	//scanf("%d", &e);

	//// ó����
	//max = a;
	//if (max < b) max = b;
 //   if (max < c) max = c;
	//if (max < d) max = d;
	//if (max < e) max = e;

	//// ��¹�
	//printf("�ִ밪 = %d\n", max);

	int data[5], max;

	/*printf("��1 = ");
	scanf("%d", &data[0;
	printf("��2 = ");
	scanf("%d", &data[1);
	printf("��3 = ");
	scanf("%d", &data[2]);
	printf("��4 = ");
	scanf("%d", &data[3]);
	printf("��5 = ");
	scanf("%d", &data[4]);*/

	for (int i = 0, i < 5; i++;) {
		printf("�� %d =", i + 1);
		scanf("%d", &data[i]);
	}

	max = data[0];
	for (int i = 1; i < 5; i++;) {
		if (max < data[i]) max = data[i];
	}

	printf("�ִ밪 = %d\n", max);

	return 0;
}