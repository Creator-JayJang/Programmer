/* 
	������ ���
	���� for���� Ȱ���Ͽ� �������� ��µǵ��� �����Ͻÿ�.
	�ܼ�(2~9), �ڿ���(1~9), ���
	**���� for���� �ٱ��� for���� �ѹ� ������ ������ ���� for���� �־��� Ƚ����ŭ �ݺ��ؼ� ����ȴ�.
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	for (int dan = 2; dan <= 9; dan++) { // �ٱ��� for �� - ��
		printf("==%d �� ===", dan);
		for (int su = 1; su <= 9; su++) { // �ٱ��� for �� - ��
			printf("%d x %d = %d\n", dan, su, dan * su);
		}
	
		printf("\n");
	}
	// ����

	// �Է¹�

	// ó����

	// ��¹�

	return 0;
}