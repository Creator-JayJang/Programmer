/* 
	��ȣ�� �Է¹޾� ��ġ�ϸ� ���α׷��� �����ϰ�, �׷��� ������ ��� ��ȣ�� ���� ������
	��µǴ� ���α׷��� �����Ͻÿ�.

	<�Է� �� �������>
	��ȣ�� ��Ȯ�� �Է��ϸ� ���α׷��� ����˴ϴ�.
	��ȣ = java
	��ȣ = c++
	��ȣ = c
	��ȣ = C
	���α׷��� �����մϴ�.
*/


#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main() {
	// ����
	char password[80] = "C"; // ��ȣ ����
	char code[80];			// �Է� ���� ��ȣ

	printf("��ȣ�� ��Ȯ�� �Է��Ͻø� ���α׷��� ����˴ϴ�. \n");

	while (1) { // ���� Loop
		printf("��ȣ =");
		scanf("%s", code);

		if (strcmp(password, code) == 0) {
			//printf("���α׷��� �����մϴ�.\n");
			//return 0;
			break;
		}
	}

	// �Է¹�

	// ó����

	// ��¹�

	return 0;
}