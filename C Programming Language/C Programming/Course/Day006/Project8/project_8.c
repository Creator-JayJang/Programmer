#include<stdio.h>

typedef struct Permament { // ������������ ��üȭ�ϴ� ����ü ����
	char name[20];		// �����̸�
	int salary;			// �޿�
}Permament;

void disp(Permament* p) {
	for (int i = 0; i < 5; i++) {
		//printf("%s : %d\n", (p+i)->name, (p+i)->salary);
		printf("%s : %d\n", p->name, p->salary);
		p++;
	}
}

int main() {
	Permament p[5] = { {"aaa",10000},
						{"bbb", 20000},
						{"ccc", 30000},
						{"ddd", 40000},
						{"eee", 50000} };

	/*for (int i = 0; i < 5; i++) {
		printf("%s : %d\n", p[i].name, p[i].salary);
	}*/
	disp(p);

	return 0;
}