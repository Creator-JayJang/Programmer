/*
	���� loop :  ���α׷��� ������� ��� �����ϴ� ��
	for(�ʱ��; ; ������;){}, for(; ; ;){}
	while(1){}
	do{}while(1);

	����ڷκ��� ���ڸ� �Է¹޾� ����ϴ� ���α׷��� �ۼ��ϵ�, �ԷµǴ� ���ڰ� 0�̸� ���α׷��� �����ϵ��� �����Ͻÿ�.

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int num;

	// �Է¹�
	//for (; ; ) { // ���� loop
	//	printf("���� [0�� �ԷµǸ� ����˴ϴ�.] = ");
	//	scanf("%d", &num);
	//	if (num == 0) break;
	//	printf("num = %d\n", num);
	//}

	while (1) { // ���� loop
		printf("���� [0�� �ԷµǸ� ����˴ϴ�.] = ");
		scanf("%d", &num);
		if (num == 0) break;
		printf("num = %d\n", num);
	}


	// ó����

	// ��¹�

	return 0;
}