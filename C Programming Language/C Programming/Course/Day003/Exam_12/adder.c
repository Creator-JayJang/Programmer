/* 
	�������� ����ϴ� ���α׷�
	�� ���� ������ �Է¹޾� �� �� ������ �ڿ������� ���� ����Ͽ� ����ϴ� ���α׷�
	
	<�Է�����>
	ù��° �� =1
	�ι�° �� =10

	<�������>
	������ = 55

	for (�ʱ��; ���ǽ�; ������){
		�ݺ��� ����;
	}

	- ������ -> ���� �Ǵ� ���Ҹ� �ϴ� ��, ++/--
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int su1, su2, res = 0;
	int i;			//�ݺ��� ó���� �����
	int tmp;		//�ӽú���

	// �Է¹�
	printf("ù��°�� = ");
	scanf("%d", &su1); // 1

	printf("�ι�°�� = ");
	scanf("%d", &su2); // 10

	// ó����
	if (su1 >= su2) {
		tmp = su1;
		su1 = su2;
		su2 = tmp;
	}

	//if (su1 <= su2) {

		for (i = su1; i <= su2; i++) { // su1 <= su2
		// res = res +1;
			res += i;   // �������� res = res  + i;
		}
	//else {
	//	for (i = su1; i >= su2; i--) { // su1 >= su2
	//		// res = res +1;
	//		res += i;
	//	}
	//}
	//}

	// ��¹�
	printf("������ = %d \n", res);


	return 0;
}