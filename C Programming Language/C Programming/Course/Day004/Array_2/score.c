/* 
	2���� �迭 : 1���� �迭�� �ߺ��� ó���ϱ� ���� �迭
	����
		�ڷ��� �迭��[÷��1] [÷��2];
		�Ǵ�
		�ڷ��� �迭��[÷��1] [÷��2] = {{...}, {....}};
		ex>
		int x[2][3];
		or
		int x[2][3] = {{1, 2, 3}, {4, 5, 6}};
		or
		int x[2][3] = {1, 2, 3, 4, 5, 6};
		or
		int x[][3] = {1, 2, 3, 4, 5, 6};



*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	//int kor, eng, math, tot;
	int x[3][4] = { 0 }; //3���� ������ �ʿ� ��.��.��, ������ ����� �迭

	/*
		x[0] = kor
		x[1] = eng
		x[2] = math	
		x[3] = tot
	*/

	double avg[3];

	for (int inwon = 0; inwon < 3; inwon++) {// �������ŭ �����ϵ��� ���� for��
	for(int sub = 0; sub < 3; sub++ ){
		printf("%d ��° ���� ���� = ",sub);
		scanf("%d", &x[inwon][sub]);
		
		// ������ ����
		xf[inwon] = x[inwon][sub];

		avg[inwon], 
		for (int inwon = 0; inwon < 3; inwon++) {// �������ŭ �����ϵ��� ���� for��
			for (int sub = 0; sub < 3; sub++) {
				printf("%d ��° ���� ���� = ", sub);
				scanf("d", &x[3]; [sub] );
	x[3] = x[0] + x[1] + x[2];
	avg = x[3] / 3.0;
	
	printf("���� = %d, ��� = %.2lf\n ", x[3], avg);
	/*printf("x�迭�� ��ü ũ�� = %d \n ", sizeof(x));
	printf("x[0] ����� ũ�� = %d \n ", sizeof(x[0]));*/

	return 0;
}