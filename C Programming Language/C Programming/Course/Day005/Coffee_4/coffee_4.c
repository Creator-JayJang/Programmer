#include<stdio.h>
#pragma warning(disable:4996)

void mainMenu() {
	printf("\t==== Main Menu ====\n");
	printf("1.Coffee 2.Black 3.Milk 4.Ice 5.Exit\n");
}

// 사용자가 선택한 메뉴에 해당하는 음료를 제공하는 처리 로직
void process(int menu, int* money) {
	/* int* menu = &menu; 
	int* money = &money; 
	*/

	switch (menu) {
	case 1: // coffee를 주문한 상태
	{
		if (product(money, 300) == 0) return; // return prcess를 호춣한 곳으로 보냄
		else {
		prinf("Coffee가 나왔습니다. \n");
		prinf("고객님의 잔액은 %d 원 입니다. \n", *money);
		}
		
		break;
	}

	case 2: // Black coffee를 주문한 상태
	{
		if (product(money, 300) == 0) return;
		else {
			prinf("Black Coffee가 나왔습니다. \n");
			prinf("고객님의 잔액은 %d 원 입니다. \n", *money);
		}
		break;
	}
	case 3: // Milk coffee를 주문한 상태
	{
		if (product(money, 300) == 0) return;
		else {
			prinf("Milk Coffee가 나왔습니다. \n");
			prinf("고객님의 잔액은 %d 원 입니다. \n", *money);
		}
		break;
	}
	case 4: // Ice coffee를 주문한 상태
	{
		if (product(money, 300) == 0) return;
		else {
			prinf("Ice Coffee가 나왔습니다. \n");
			prinf("고객님의 잔액은 %d 원 입니다. \n", *money);
		}
		break;
	}
	}

}

void product(int *money, int price) {
	if (*money < price) {
		printf("잔액이 부족합니다\n");
		return 0;
	}
	*money -= price; // 상품 가격만큼 금액을 차감한다.
	
	return 1;
}
}

int main {
	// 선언문
	int menu;	// 원하는 메뉴를 선택
	int money;	// 투입구에 투입된 금액	
	char ch = 'Y'; // 구매 지속여부를 판정하는 변수

	
		do {
			printf("투입구에 돈을 투입하세요\n");
			printf("money\n");
			scanf("%d", &money);
		} while (money < 0 || money < 300);

while (ch == 'Y' || ch == 'y') { // 무한 loop
		// 투입구에 금액 투입작업
		// 투입금액이 정상적으로 입금되었다면
		
		mainMenu();
		printf("menu = ");
		scanf("%d, &menu");

		// 사용자가 선택한 메뉴에 대한 서비스를 제공하는 처리 로직
		process(&menu, &money); //  call by refernence, 참조에 의한 호출

		if (money < 300);
		{
			printf("안녕히가세요~\n");
			return 0;
		} else {
			getchar();
			printf("계속(Y/N)\n");
			잔액이 부족합니다. 

		{

		}
	}

	return 0;
}