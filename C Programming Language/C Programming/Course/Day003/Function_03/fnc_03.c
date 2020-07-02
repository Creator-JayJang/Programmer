/*
	Call By Reference, �ּҿ� ���� ȣ�� �Ǵ� ������ ���� ȣ��
	- �Ű������� ���� �ƴ϶� �� ���� �ּҸ� �̿��Ͽ� ȣ���ϴ� ����
*/

# include<stdio.h>

// �Լ�����
void swap(int*, int*);

// main ���Ǻ�
int main() {
	int x = 10, y = 20;

	printf("swap �Լ� ȣ�� �� \n");
	printf("x=%d, y=%d\n", x, y);

	// �Լ� ȣ��
	swap(&x, &y); // Call by reference, �ּҿ� ���� ȣ��

	printf("swap �Լ� ȣ�� �� \n");
	printf("x=%d, y=%d\n", x, y);

	return 0;
}

void swap(int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;

	printf("swap �Լ��ȿ��� x, y�� \n");
	printf("x = %d, y = %d \n", *x, *y);
}