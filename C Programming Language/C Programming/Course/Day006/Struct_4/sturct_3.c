/*
   ���� ��üȭ�ϴ� ����ü�� �����Ͽ� ���α׷��� �Ͻÿ�.

*/

#include<stdio.h>
#pragma warning(disable:4996)

// ��ũ�λ�� ���Ǻ�
#define PI 3.14
#define SIZE 5

// ����ü ���Ǻ�
typedef struct Circle {
	int radius;		// ������, 4byte
	double area;	// ���Ǹ���, 8byte
}Circle;

/*
  ���� ��ü�� 5�� �Է¹޾� ���� ������ ����� �� ������ 100�̻� 200������ ��ü����
  ����ϴ� ���α׷��� �����Ͻÿ�.

  �������� �Է¹޾� ���� ��ü�� ������ �� �Էµ� �������� 0�̸� �Է��� ��ģ��.
  �̶� �Էµ� �������� �̿��Ͽ� ���� ������ ����� �� �� ���� 100�̻� 200������
  ��ü���� ����ϴ� ���α׷��� �����Ͻÿ�.
*/

int main() {
	// ����ü�� ���� ����
	Circle ac;
	Circle c[80];

	double area;	// ���Ǹ���
	int count = 0;	// ��ü���� �����ϴ� ��������(�ݵ�� �ʱ�ȭ��Ų��.)

	int x;     // 4byte
	int y[5];  // 4byte * 5 20byte

	// �Է¹�
	//for (int i = 0; i < 80; i++) {
	int i = 0;
	while (1) {
		printf("������ = ");
		scanf("%d", &c[i].radius);
		if (c[i].radius == 0) break;
		c[i].area = (double)c[i].radius * c[i].radius * PI;
		//printf("������ %d�� ���� = %.2lf\n", c[i].radius, area);
		if (c[i].area >= 100 && c[i].area <= 200) count++;
		i++;
	}


	// ó����
	//area = ac.radius * ac.radius * PI;

	// ��¹�
	//printf("������ %d�� ���� = %.2lf\n", ac.radius, area);
	printf("100�̻� 200������ ��ü�� = %d\n", count);
	return 0;
}