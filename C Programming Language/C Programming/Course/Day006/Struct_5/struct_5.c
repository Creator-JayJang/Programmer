/*
   ����ü �迭�� �ʱ�ȭ
*/

#include<stdio.h>

typedef struct Person {
	char name[20];
	char phone[14];
	int age;
}Person;

int main() {
	// ����ü�� ����
	Person p[3] = { {"ȫ�浿", "010-1234-5678", 19},
					{"�庸��", "010-3333-4444", 21},
					{"�̼���", "010-8888-9999", 20} };

	// ����ü �����ͺ���
	Person* cp = p; // &p[0]


	for (int i = 0; i < 3; i++) {
		//printf("%s : %s : %d\n", p[i].name, p[i].phone, p[i].age);
		printf("%s : %s : %d\n", (cp + i)->name, (cp + i)->phone, (cp + i)->age);
		//cp++;
	}

	return 0;
}