#include<stdio.h>
#pragma warning(disable:4996)

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address* lp);

int main() {
	struct address list[5] = {
		{"홍길동", 23,"111-1111","울릉도 독도"},
		{"이순신", 35,"123-1232","서울 강북"},
		{"장보고", 50,"114-1251","전북 전주"},
		{"유관순", 27,"112-3451","전남 광주"},
		{"안중근", 56,"126-1256","황해도 해주"}
	};
	print_list(list);
	return 0;
}

void print_list(struct address* lp)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%s %d %s %s \n ", (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}

}