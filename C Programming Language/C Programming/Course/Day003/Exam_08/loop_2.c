/*
	�ϳ��� ���ڸ� �Է¹޾� ����� �� �ݺ����θ� Ȯ���� �� �۾��� �����ϵ��� ���α׷��� �����Ͻÿ�.

	<�Է� �� �������>
	���� = k
	k == K
	���(y/n) = y

	���� = a
	a == A
	���(y/n) = N
	���α׷��� �����մϴ�.

	Tip A(65) a(97), Z(90) z(122)
*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	char ch;	// �Է¹��� ����
	char check; // �ݺ����θ� �����ϴ� ����

	// �Է¹� + ó���� + ��¹�
	while (1) {  // ���ѷ���
		printf("���� = ");
		scanf("%c", &ch);

		if (ch >= 'A' && ch <= 'Z') { // �Է¹��� ���ڰ� �빮�ڶ��
			printf("%c ==> %c\n", ch, ch + 32);
		}
		else { // �Է¹��� ���ڰ� �ҹ��ڶ��
			printf("%c ==> %c\n", ch, ch - 32);
		}

		getchar();
		/*
			ǥ��������Լ�
			printf, puttchar, puts
			scanf, getchar, gets
		*/

		printf("���(y/n) = ");
		scanf("%c", &check);
		if (ch >= 'n' || ch <= 'N') break;
		
		getchar();
	}

	printf("���α׷��� �����մϴ�.\n");

	return 0;
}