#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int money; // ���Ա��� �ִ� ��
	int menu; //���õ� �޴�
	char check; // y/n

	// ó����
		while (1) {	// ���� loop
			
			do {
				printf("���Ա��� ���� �־��ּ���.\n");
				printf("money = ");
				scanf("%d", &money);
			} while (money < 0 || money < 300);

			printf("\n\n==== Main Menu ====\n");
			printf("1. Coffee(300��)\n");
			printf("2. Black Coffee(500��)\n");
			printf("3. Milk Coffee(700��)\n");
			printf("4. Ice Coffee(900��)\n");
			printf("============================\n");
	
					printf("menu = ");
					scanf("%d", &menu);
		

						if (menu == 1) {
						money -= 300;	// Ŀ�ǰ��ݸ�ŭ ���Ե� �ݾ��� �����Ѵ�.
						printf("Coffee�� ���Խ��ϴ�.\n");
						printf("���� �ܾ��� %d�� �Դϴ�.\n", money);

						if (money < 300) {
							printf("�ȳ��� ������~~~\n");
							return 0;
						}
						else {
							printf("���(Y/N) = ");
							scanf("%c", &check);
							if (check == 'N' || check == 'n') break;
						}
			}
			else if (menu == 2) {
							if (money < 500) {
								printf("�ܾ��� �����մϴ�.\n");
								break;
							}
							else {
								money -= 500;
								printf("Black Coffee�� ���Խ��ϴ�.\n");
								printf("���� �ܾ��� %d�� �Դϴ�.\n", money);

								if (money < 300) {
									printf("�ȳ��� ������~~~\n");
									return 0;
								}
								else {
									printf("���(Y/N) = ");
									scanf("%c", &check);
									if (check == 'N' || check == 'n') break;
								}
							}
			}
			else if (menu == 3) {
							if (money < 300) {
								printf("�ܾ��� �����մϴ�.\n");
								break;
							}
							else {
								money -= 700;
								printf("Milk Coffee�� ���Խ��ϴ�.\n");
								printf("���� �ܾ��� %d�� �Դϴ�.\n", money);

								if (money < 300) {
									printf("�ȳ��� ������~~~\n");
									return 0;
								}
								else {
									printf("���(Y/N) = ");
									scanf("%c", &check);
									if (check == 'N' || check == 'n') break;
								}

			}
			else if (menu == 4) {
							if (money < 300) {
								printf("�ܾ��� �����մϴ�.\n");
								break;
							}
							else {
								money -= 900;
								printf("Ice Coffee�� ���Խ��ϴ�.\n");
								printf("���� �ܾ��� %d�� �Դϴ�.\n", money);

								if (money < 300) {
									printf("�ȳ��� ������~~~\n");
									return 0;
								}
								else {
									printf("���(Y/N) = ");
									scanf("%c", &check);
									if (check == 'N' || check == 'n') break;
								}
			}
			else {
				printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n")
			}
		}

	// ��¹�

	return 0;
}