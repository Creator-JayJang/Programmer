/*
*(p+0)= 1
*(p+1)=2
*/


#include<stdio.h>

int main() {
	int x[5] = { 1, 2, 3, 4, 5 };
	int* p;
	int sum = 0;
	int i;

	p = x; // �迭���� �迭�� �����ּҿ� ���� �ǹ��̴�. ��, x == &x[0] 
	printf("p = %d\n", p);
	/* x�迭�� ��ҵ��� ���� ����Ͽ� sum ������ ������ �� ����ϴ� ���� */

	// sum = x[0] + x[1] + x[2] + x[3] + x[4];

	for (i = 0; i < 5; i++) {
		// sum += x[i];
		sum += *p++;

	}


	printf("sum = %d\n", sum);
	printf("p = %d\n", p);
		return 0;
}