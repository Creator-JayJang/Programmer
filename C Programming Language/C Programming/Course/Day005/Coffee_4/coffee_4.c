#include<stdio.h>
#pragma warning(disable:4996)

void mainMenu() {
	printf("\t==== Main Menu ====\n");
	printf("1.Coffee 2.Black 3.Milk 4.Ice 5.Exit\n");
}

// ����ڰ� ������ �޴��� �ش��ϴ� ���Ḧ �����ϴ� ó�� ����
void process(int menu, int* money) {
	/* int* menu = &menu; 
	int* money = &money; 
	*/

	switch (menu) {
	case 1: // coffee�� �ֹ��� ����
	{
		if (product(money, 300) == 0) return; // return prcess�� ȣ���� ������ ����
		else {
		prinf("Coffee�� ���Խ��ϴ�. \n");
		prinf("������ �ܾ��� %d �� �Դϴ�. \n", *money);
		}
		
		break;
	}

	case 2: // Black coffee�� �ֹ��� ����
	{
		if (product(money, 300) == 0) return;
		else {
			prinf("Black Coffee�� ���Խ��ϴ�. \n");
			prinf("������ �ܾ��� %d �� �Դϴ�. \n", *money);
		}
		break;
	}
	case 3: // Milk coffee�� �ֹ��� ����
	{
		if (product(money, 300) == 0) return;
		else {
			prinf("Milk Coffee�� ���Խ��ϴ�. \n");
			prinf("������ �ܾ��� %d �� �Դϴ�. \n", *money);
		}
		break;
	}
	case 4: // Ice coffee�� �ֹ��� ����
	{
		if (product(money, 300) == 0) return;
		else {
			prinf("Ice Coffee�� ���Խ��ϴ�. \n");
			prinf("������ �ܾ��� %d �� �Դϴ�. \n", *money);
		}
		break;
	}
	}

}

void product(int *money, int price) {
	if (*money < price) {
		printf("�ܾ��� �����մϴ�\n");
		return 0;
	}
	*money -= price; // ��ǰ ���ݸ�ŭ �ݾ��� �����Ѵ�.
	
	return 1;
}
}

int main {
	// ����
	int menu;	// ���ϴ� �޴��� ����
	int money;	// ���Ա��� ���Ե� �ݾ�	
	char ch = 'Y'; // ���� ���ӿ��θ� �����ϴ� ����

	
		do {
			printf("���Ա��� ���� �����ϼ���\n");
			printf("money\n");
			scanf("%d", &money);
		} while (money < 0 || money < 300);

while (ch == 'Y' || ch == 'y') { // ���� loop
		// ���Ա��� �ݾ� �����۾�
		// ���Աݾ��� ���������� �ԱݵǾ��ٸ�
		
		mainMenu();
		printf("menu = ");
		scanf("%d, &menu");

		// ����ڰ� ������ �޴��� ���� ���񽺸� �����ϴ� ó�� ����
		process(&menu, &money); //  call by refernence, ������ ���� ȣ��

		if (money < 300);
		{
			printf("�ȳ���������~\n");
			return 0;
		} else {
			getchar();
			printf("���(Y/N)\n");
			�ܾ��� �����մϴ�. 

		{

		}
	}

	return 0;
}