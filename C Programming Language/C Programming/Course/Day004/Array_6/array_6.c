#include<stdio.h>

void change(int *x, int *y) { // int *x = &x, int *y = &y  * �ּ��� ���� �����ϱ� ���ؼ�
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	printf("change �Լ� ������ x = %d, y = %d\n", *x, *y); // 20 10
}

int main() {
	int x = 10, y = 20;

	printf("change ȣ�� ���� x = %d, y = %d\n", x, y); // 10 20 
	change(&x, &y); // call by value - & �ּ� ������ 
	printf("change ȣ�� �Ŀ� x = %d, y = %d\n", x, y);
	// main�� x�� change�� x�� �ٸ���

	return 0;
}