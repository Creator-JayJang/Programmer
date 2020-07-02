#include<stdio.h>
#pragma warning(disable:4996)

void mainMenu() {
	printf("\t==== Main Menu ====\n");
	printf("1.Coffee 2.Black 3.Milk 4.Ice 5.Exit\n");
}

// »ç¿ëÀÚ°¡ ¼±ÅÃÇÑ ¸Ş´º¿¡ ÇØ´çÇÏ´Â À½·á¸¦ Á¦°øÇÏ´Â Ã³¸® ·ÎÁ÷
void process(int menu, int* money) {
	/* int* menu = &menu; 
	int* money = &money; 
	*/

	switch (menu) {
	case 1: // coffee¸¦ ÁÖ¹®ÇÑ »óÅÂ
	{
		if (product(money, 300) == 0) return; // return prcess¸¦ È£­„ÇÑ °÷À¸·Î º¸³¿
		else {
		prinf("Coffee°¡ ³ª¿Ô½À´Ï´Ù. \n");
		prinf("°í°´´ÔÀÇ ÀÜ¾×Àº %d ¿ø ÀÔ´Ï´Ù. \n", *money);
		}
		
		break;
	}

	case 2: // Black coffee¸¦ ÁÖ¹®ÇÑ »óÅÂ
	{
		if (product(money, 300) == 0) return;
		else {
			prinf("Black Coffee°¡ ³ª¿Ô½À´Ï´Ù. \n");
			prinf("°í°´´ÔÀÇ ÀÜ¾×Àº %d ¿ø ÀÔ´Ï´Ù. \n", *money);
		}
		break;
	}
	case 3: // Milk coffee¸¦ ÁÖ¹®ÇÑ »óÅÂ
	{
		if (product(money, 300) == 0) return;
		else {
			prinf("Milk Coffee°¡ ³ª¿Ô½À´Ï´Ù. \n");
			prinf("°í°´´ÔÀÇ ÀÜ¾×Àº %d ¿ø ÀÔ´Ï´Ù. \n", *money);
		}
		break;
	}
	case 4: // Ice coffee¸¦ ÁÖ¹®ÇÑ »óÅÂ
	{
		if (product(money, 300) == 0) return;
		else {
			prinf("Ice Coffee°¡ ³ª¿Ô½À´Ï´Ù. \n");
			prinf("°í°´´ÔÀÇ ÀÜ¾×Àº %d ¿ø ÀÔ´Ï´Ù. \n", *money);
		}
		break;
	}
	}

}

void product(int *money, int price) {
	if (*money < price) {
		printf("ÀÜ¾×ÀÌ ºÎÁ·ÇÕ´Ï´Ù\n");
		return 0;
	}
	*money -= price; // »óÇ° °¡°İ¸¸Å­ ±İ¾×À» Â÷°¨ÇÑ´Ù.
	
	return 1;
}
}

int main {
	// ¼±¾ğ¹®
	int menu;	// ¿øÇÏ´Â ¸Ş´º¸¦ ¼±ÅÃ
	int money;	// ÅõÀÔ±¸¿¡ ÅõÀÔµÈ ±İ¾×	
	char ch = 'Y'; // ±¸¸Å Áö¼Ó¿©ºÎ¸¦ ÆÇÁ¤ÇÏ´Â º¯¼ö

	
		do {
			printf("ÅõÀÔ±¸¿¡ µ·À» ÅõÀÔÇÏ¼¼¿ä\n");
			printf("money\n");
			scanf("%d", &money);
		} while (money < 0 || money < 300);

while (ch == 'Y' || ch == 'y') { // ¹«ÇÑ loop
		// ÅõÀÔ±¸¿¡ ±İ¾× ÅõÀÔÀÛ¾÷
		// ÅõÀÔ±İ¾×ÀÌ Á¤»óÀûÀ¸·Î ÀÔ±İµÇ¾ú´Ù¸é
		
		mainMenu();
		printf("menu = ");
		scanf("%d, &menu");

		// »ç¿ëÀÚ°¡ ¼±ÅÃÇÑ ¸Ş´º¿¡ ´ëÇÑ ¼­ºñ½º¸¦ Á¦°øÇÏ´Â Ã³¸® ·ÎÁ÷
		process(&menu, &money); //  call by refernence, ÂüÁ¶¿¡ ÀÇÇÑ È£Ãâ

		if (money < 300);
		{
			printf("¾È³çÈ÷°¡¼¼¿ä~\n");
			return 0;
		} else {
			getchar();
			printf("°è¼Ó(Y/N)\n");
			ÀÜ¾×ÀÌ ºÎÁ·ÇÕ´Ï´Ù. 

		{

		}
	}

	return 0;
}