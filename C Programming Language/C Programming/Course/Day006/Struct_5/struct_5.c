/*
   구조체 배열의 초기화
*/

#include<stdio.h>

typedef struct Person {
	char name[20];
	char phone[14];
	int age;
}Person;

int main() {
	// 구조체형 변수
	Person p[3] = { {"홍길동", "010-1234-5678", 19},
					{"장보고", "010-3333-4444", 21},
					{"이순신", "010-8888-9999", 20} };

	// 구조체 포인터변수
	Person* cp = p; // &p[0]


	for (int i = 0; i < 3; i++) {
		//printf("%s : %s : %d\n", p[i].name, p[i].phone, p[i].age);
		printf("%s : %s : %d\n", (cp + i)->name, (cp + i)->phone, (cp + i)->age);
		//cp++;
	}

	return 0;
}