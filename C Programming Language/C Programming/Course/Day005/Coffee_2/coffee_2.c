#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// 선언문
	int money; // 투입구에 넣는 돈
	int menu; //선택된 메뉴
	char check; // y/n

	// 처리문
		while (1) {	// 무한 loop
			
			do {
				printf("투입구에 돈을 넣어주세요.\n");
				printf("money = ");
				scanf("%d", &money);
			} while (money < 0 || money < 300);

			printf("\n\n==== Main Menu ====\n");
			printf("1. Coffee(300원)\n");
			printf("2. Black Coffee(500원)\n");
			printf("3. Milk Coffee(700원)\n");
			printf("4. Ice Coffee(900원)\n");
			printf("============================\n");
	
					printf("menu = ");
					scanf("%d", &menu);
		

						if (menu == 1) {
						money -= 300;	// 커피가격만큼 투입된 금액을 차감한다.
						printf("Coffee가 나왔습니다.\n");
						printf("고객님 잔액은 %d원 입니다.\n", money);

						if (money < 300) {
							printf("안녕히 가세요~~~\n");
							return 0;
						}
						else {
							printf("계속(Y/N) = ");
							scanf("%c", &check);
							if (check == 'N' || check == 'n') break;
						}
			}
			else if (menu == 2) {
							if (money < 500) {
								printf("잔액이 부족합니다.\n");
								break;
							}
							else {
								money -= 500;
								printf("Black Coffee가 나왔습니다.\n");
								printf("고객님 잔액은 %d원 입니다.\n", money);

								if (money < 300) {
									printf("안녕히 가세요~~~\n");
									return 0;
								}
								else {
									printf("계속(Y/N) = ");
									scanf("%c", &check);
									if (check == 'N' || check == 'n') break;
								}
							}
			}
			else if (menu == 3) {
							if (money < 300) {
								printf("잔액이 부족합니다.\n");
								break;
							}
							else {
								money -= 700;
								printf("Milk Coffee가 나왔습니다.\n");
								printf("고객님 잔액은 %d원 입니다.\n", money);

								if (money < 300) {
									printf("안녕히 가세요~~~\n");
									return 0;
								}
								else {
									printf("계속(Y/N) = ");
									scanf("%c", &check);
									if (check == 'N' || check == 'n') break;
								}

			}
			else if (menu == 4) {
							if (money < 300) {
								printf("잔액이 부족합니다.\n");
								break;
							}
							else {
								money -= 900;
								printf("Ice Coffee가 나왔습니다.\n");
								printf("고객님 잔액은 %d원 입니다.\n", money);

								if (money < 300) {
									printf("안녕히 가세요~~~\n");
									return 0;
								}
								else {
									printf("계속(Y/N) = ");
									scanf("%c", &check);
									if (check == 'N' || check == 'n') break;
								}
			}
			else {
				printf("메뉴의 선택이 올바르지 않습니다.\n")
			}
		}

	// 출력문

	return 0;
}