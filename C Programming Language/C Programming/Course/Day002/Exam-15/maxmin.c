/*
	�� ���� ������ �Է¹޾� ū ���� ����ϴ� ���α׷��� �����Ͻÿ�.
	��, ���׿����ڸ� �̿��Ͽ� ������ ��.

	<�Է�����>
	ù��°�� = 
	�ι�°�� = 
	����°�� =

	<�������>
	ū�� : xx

	<Tip>
	������ ���ϴ� ���� ���Ѵ�. �ϳ��� ������ �ϳ��� ����� ���� �� �ִ�.
	����, �ش� ������ �ٸ� ���� ������ ������ ���� ��������.

*/

/*
#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	// ����
	int su1,su2; 

	// �Է¹�
	printf("ù��°�� = ");
	scanf("%d", &su1);
	printf("�ι�°�� = ");
	scanf("%d", &su2);

	// ó����
	su1 >= su2 ? printf("ū��:%d", su1 ) : printf("ū��:%d", su2);

	return 0;
}
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int first, second, third, max;

	// �Է¹�
	printf("ù��° �� = ");
	scanf("%d", &first);
	printf("�ι�° �� = ");
	scanf("%d", &second);
	printf("����° �� = ");
	scanf("%d", &third);

	// ó����
	max = first > second ? first : second; // ù��°�� �ι�°�� ���Ͽ� ū���� max�� ��´�.
	max = max > third ? max : third; // max�� ����°���� ���ؼ� ū ���� max�� ��´�.

	// ��¹�
	printf("�ִ밪 = %d\n", max);

	return 0;
}