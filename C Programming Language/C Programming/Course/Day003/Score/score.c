/*
	����ó�� ���α׷�
	1�ܰ� : ��, ��, �� ������ �Է¹޾� ����, ��� ���/���
	(����� �Ҽ��� ���� 2�ڸ�����)
	2�ܰ� : ��, ��, �� ������ �Է¹޾� ����, ���, ���� ���/���
	(������ switch~case �� �̿�)
	3�ܰ� : ��, ��, �� ������ �Է¹޾� ����, ��� ���/���
			- ����� �Ҽ��� ���� 2�ڸ�����
			- �� ������ ������ 0 ~ 100������ ���� �Է��ϵ�, ������ ����� �ٽ� �Է��ϵ��� ����
	4�ܰ� : 3���� ��, ��, �� ������ �Է¹޾� ����, ��� ���/���
			��, �迭�� �̿��Ͽ� ������ ��.
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	//int kor, eng, math, tot; 
	int score[4] = {0};
	/* score[0]= kor, score[1]= eng, score[2]= math, score[3]= tot*/
	double avg;

	// �Է¹�
	/*printf("����1 = ");
	scanf("%d", &score[0]);
	printf("����2 = ");
	scanf("%d", &score[1]);
	printf("����3 = ");
	scanf("%d", &score[2]);*/

	for (int i = 0; i < 3; i++) {
		printf("����%d = ", i+1);
		scanf("%d", &score[i]);
		score[3] += score[i];
	}

	// ó����
	//	score[3] = score[0] + score[1] + score[2];
	avg = score[3] / 3.0;

	// ��¹�
	printf("���� = %d, ��� = %.2lf\n", score[3], avg);

	return 0;
}