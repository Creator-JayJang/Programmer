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
		{"ȫ�浿", 23,"111-1111","�︪�� ����"},
		{"�̼���", 35,"123-1232","���� ����"},
		{"�庸��", 50,"114-1251","���� ����"},
		{"������", 27,"112-3451","���� ����"},
		{"���߱�", 56,"126-1256","Ȳ�ص� ����"}
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