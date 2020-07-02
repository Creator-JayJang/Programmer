/* 
	�Լ�(Function)
	1. ���� 
		- ��ɾ��� ����
		- ���(Module)

	2. ����
		��ȯ��(����� ���ϰ�), �Լ���(�Ű�����) {
			�Լ��� �������Ǻ�;
			return;
		}

		- ��ȯ�� �Ǵ� ��������ϰ� : ȣ���� ������ �ǵ����ִ� ���� �ڷ���(char, int, float, double)
			void : ��ȯ�� ���� ����

		- �Լ��� : ����� ���� ��Ģ�� �°� ����Ǹ�, �Ϲ������� �ҹ��ڷ� �ۼ��Ѵ�.
		- return ��: 
		  return ����;
		  return;

	3. �Լ��� �ۼ� ����
		- �Լ��� ���� : �Լ��� ����ϴ� ��
		- �Լ��� ȣ�� : ��� �Լ��� �ݵ�� ȣ���� ���ؼ� �����Ѵ�.
						��, �ý��ۿ� ���� ȣ��Ǵ� �Լ�(�ݹ��Լ�, main())
		- �Լ��� ���� : main() �տ� �Լ��� ���縦 �˸��� ���� ���
	
	4. �Լ��� ȣ�� ���
		- Call by name : �̸��� ���� ȣ��
			�Լ��� �̸��� ���� ȣ���ϴ� ����

		- Call by value : ���� ���� ȣ��
			�Լ��� ȣ���� �� Ư�� ���� �����ٰ� ó���ϴ� ����

		- Call by reference : ����(�ּ�)�� ���� ȣ��
			�Լ��� ȣ���� �� Ư�� ���� �ּҸ� �����ٰ� ó���ϴ� ����

	5. �Լ��� ���� ���
		- ��ȯ���� ����, �Ű������� ���� ����
			void aaa() {}

		- ��ȯ���� �ְ�, �Ű������� ���� ����
			int bbb() {}

		- ��ȯ���� ����, �Ű������� �ִ� ����
			void ccc(int x, float y) {}

		- ��ȯ���� �ְ�, �Ű������� �ִ� ����
			float ddd(int x, double y){}		
*/


#include<stdio.h>
#pragma warning(disable:4996)

// �Լ� ����/ �Լ� ���Ǻ�
void menu() { // �ܼ� ���
	printf("=== ���� ���α׷� ===\n");
	printf("1. ���ϱ�, 2. ����, 3. ���ϱ�, 4. ������\n");
	printf("----------------------------------------\n");
}

int add(int x, int y) {
	return  x + y;
}

int sub(int x, int y) {
	int res;

	res = x - y;

	return res;
}

int mul(int x, int y) {
	return x * y;
}

int div(int x, int y) {
	if (y == 0) y = 1;
	return x / y;
}

int main() {
	// ����
	int su1, su2, res = 0; // ���� res�� �̸��� ������ �޶�!
	int op; // �Է¹��� ����

	// �Է¹�
	printf("ù��° �� = ");
	scanf("%d", &su1);
	printf("�ι�° �� = ");
	scanf("%d", &su2);

	// �Լ� ȣ��
	menu(); // Call by name
	printf("������ = ");
	scanf("%d", &op);

	// ó����
	switch (op) {
	case 1: 
	{
		res = add(su1, su2);
		printf("%d + %d = %d\n", su1, su2, res);
		break;
	}
	case 2: 
	{
		res = sub(su1, su2);
		printf("%d - %d = %d\n", su1, su2, res);
		break;
	}
	case 3: 
	{
		res = mul(su1, su2);
		printf("%d * %d = %d\n", su1, su2, res);
		break;
	}
	case 4: 
	{
		res = div(su1, su2);
		printf("%d / %d = %d\n", su1, su2, res);
	} // case 4 close
	} // switch �� close

	// ��¹�
	//printf("��� �� = %d\n", res);
	


	return 0; // �ý��� ����
}