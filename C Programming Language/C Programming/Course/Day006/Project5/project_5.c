/*
   ����ü�� �����Ҵ�
   ����ü�� ���� �ٸ� �ڷ����� �ϳ��� �̸����� ��� ����ϴ� �ڷᱸ���̴�.
   ����ü�� ����ڿ� ���� ������ ����� ���� �ڷ����̴�.

   1. ����ü�� ����� ��� �ʵ�
   2. ����ü�� ���� ��� �ʵ忡 �����ϴ� ���
*/

#include<stdio.h>
#include<string.h>

// ����ü ���Ǻ�
typedef struct Person {  // ����� ��üȭ��Ű�� ����ü
	//char name[20];
	char* name;
	int age;
}Person;

int main() {
	// ���� - ������ �ڷ����� �ʱⰪ�� �����ϴ� ����
	//struct Person people = {"�庸��", 20};
	/*Person people1 = { "�庸��", 20 };
	Person people2 = { "�̼���", 21 };
	Person people3 = { "������", 23 };*/

	Person people[3] = { { "�庸��", 20 } ,
						 { "�̼���", 21 } ,
						 { "������", 23 } };

	//people.age = 20;
	//people.name = "�庸��";
	//strcpy(people.name, "�庸��");

	/*printf("�̸� : %s, ���� : %d\n", people1.name, people1.age);
	printf("�̸� : %s, ���� : %d\n", people2.name, people2.age);
	printf("�̸� : %s, ���� : %d\n", people3.name, people3.age);*/
	for (int i = 0; i < 3; i++) {
		printf("�̸� : %s, ���� : %d\n", people[i].name, people[i].age);
	}

	printf("Person ����ü�� ũ�� : %d\n", sizeof(Person));
	return 0;
}