/*
	5���� ���� ����Ͽ� �Ա� �� ���ó���� �����ϵ��� ���α׷��� �����Ͻÿ�.
	��, ����� ���� ������ �迭�� �����ϵ�, �� �ĺ� id�� �迭�� index�� �̿��� ��.

	int cust[5];
	cust[0],cust[1],cust[2],cust[3],cust[4]

	
*/

#include<stdio.h>
#pragma warning(disable:4996)

// ��ũ�� ���
#define MAX 5

// �Լ� �����
void menu();		// �޴� ���
void make(int balance[], int id);		// ���� ����
void input();		// �Ա� ó��
void output();		// ��� ó��
void show();		// ��� ���� ���� ���

int main() {
	// ����
	int id, balance;
	int check;
	int cust[MAX] = {0};
	
	for (int i = 0; i <= MAX; i++) {	// ��ϰ����� �ο����� ���߾� �ݺ�����
		// �޴����
		menu();

		// ������� ���ÿ� ���� �۾��� ���� ����
		printf("menu = ");
		scanf("d", &check);

		if (check == 1) {
			make(cust, i);
		}
		else if (check == 2) {
		
		}
		else if (check == 3) {
		
		}
		else if (check == 4) {
			printf("��ü ���� �ܾ����� ��� \n");
			for (int a = 0; a < i; a++) {
				printf("%d ���� �ܾ� %d�� �Դϴ�. \n", a, cust[a]);
			}
			i--; // ���� ����� ���� �ƴϹǷ�
		}
		else if (check == 5) {
			printf("���α׷��� �����մϴ�.\n");
				return 0;
		}
		else {
			printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�. \n");
			i--;	// ���� ����� ���� �ƴϹǷ�
		}

	
	}

	// �Է¹�

	// ó����

	// ��¹�

	return 0;
}

void menu() {
	printf("== <Bank Menu> == \n");
	printf("1. ���°��� \n");
	printf("2. �Ա�ó�� \n");
	printf("3. ���ó�� \n");
	printf("4. ��ü������ \n");
	printf("5. �۾����� \n");
	printf("================= \n");

}

void make(int balance[], int id) {// ���� ����
	/*
		���������� ������ ����� �ǹ̰� �Ҹ�ȴ�.

	*/

	printf("== ���°��� == \n");
	printf("���¹�ȣ = %d \n", id);
	printf("�Ա� �ݾ� = ");
	scanf("%d", &balance[id]);
	printf("���°����� �Ϸ�Ǿ����ϴ�. \n");

}