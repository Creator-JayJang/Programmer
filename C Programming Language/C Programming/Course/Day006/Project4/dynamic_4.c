#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	//int num[100]; // 4byte * 100 = 400byte
	int* pi = (int*)malloc(sizeof(int) * 100);
	int index = 0, sum = 0;

	if (pi == NULL) {
		printf("�����Ҵ翡 �����Ͽ����ϴ�.\n");
		return 0;
	}

	while (1) {
		printf("�� = ");
		scanf("%d", &pi[index]);

		if (pi[index] == 0) break;
		index++;
	}

	for (int i = 0; i < index; i++) {
		sum += pi[i];
	}

	printf("sum = %d\n", sum);

	free(pi);

	return 0;
}