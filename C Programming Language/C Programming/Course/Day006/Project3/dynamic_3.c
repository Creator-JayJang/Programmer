/*
   �ټ����� ������ �Է¹޾� ���� ����� �� ����� ����ϴ� ���α׷��� �����Ͻÿ�.
   �Է¹��� ������ ���� ū ���� ����ϴ� ���α׷��� �����Ͻÿ�.
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int num, max;

	printf("1��° �ڷ� = ");
	scanf("%d", &num);

	max = num;

	for (int i = 1; i < 5; i++) {
		printf("%d��° �ڷ� = ", i + 1);
		scanf("%d", &num);

		if (max < num) max = num;
		//sum += num;
	}

	printf("max = %d\n", max);

	return 0;
}