/*
	 ���� ó�� ���α׷� 3�ܰ�
	 ����, ����, ���������� �Է¹޾� ������ ���, �׸��� ������ ����ϴ� ���α׷��� �����Ͻÿ�.

	 <�Է�����>
	 ���� =
	 ���� =
	 ���� =

	<�������>
	���� = xx, ��� = xx.xx, ���� = xx

	<ó������>
	1. ���α׷����� ����� ������ �ڷ����� �̸��� ���Ƿ� �����Ѵ�.
	2. ����� ������ �̿��Ͽ� �����ϵ�, �Ҽ��� ���� ��°�ڸ����� �����Ѵ�. 
	3. ������ ����� �̿��Ͽ� �����ϵ�, ������ 90�� �̻��̸� 'A', ������ 80�� �̻��̸� 'B', ������ 70�� �̻��̸� 'C', ������ 60�� �̻��̸� 'D',
	   �� �ܿ��� 'F'�� ó���Ѵ�.
	4. ������ switch~case ���� �̿��Ͽ� �����Ѵ�.
	5. * �� ������ ������ 0 ~ 100�� ���̿� �Է��ϵ�, ������ ����� �ٽ� �Է¹޵��� �����Ѵ�.

	*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int kor, eng, math, tot;
	double avg;
	char level;

	// �Է¹�
	do {
	printf("���� = ");
	scanf("%d", &kor);
	} while (kor < 0 || kor > 100);
	
	do {
	printf("���� = ");
	scanf("%d", &eng);
	} while (eng < 0 || eng > 100);

	do {
	printf("���� = ");
	scanf("%d", &math);
	} while (math < 0 || math > 100);

	

	// ó����
	tot = kor + eng + math;
	avg = tot / 3.0;

		switch ((int)avg/ 10) { // ������
		case 10:
		case 9: level = 'A'; break; //90~99
		case 8: level = 'B'; break; //80~89
		case 7: level = 'C'; break; //70~79
		case 6: level = 'D'; break; //60~69
		default: // case�� ���ϴ� ���� �������� ���� ��
			level = 'F'; 
		}

	// ��¹�
	printf("���� = %d, ��� = %.2lf, ���� = %c\n", tot, avg, level);
	/*
		int => %d, long => %ld
		float => %f, double => %lf
	*/


	return 0;
}