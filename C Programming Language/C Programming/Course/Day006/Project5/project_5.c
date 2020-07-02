/*
   구조체와 동적할당
   구조체는 서로 다른 자료형을 하나의 이름으로 묶어서 사용하는 자료구조이다.
   구조체는 사용자에 의해 생성된 사용자 정의 자료형이다.

   1. 구조체의 선언과 멤버 필드
   2. 구조체의 사용과 멤버 필드에 접근하는 방법
*/

#include<stdio.h>
#include<string.h>

// 구조체 정의부
typedef struct Person {  // 사람을 객체화시키는 구조체
	//char name[20];
	char* name;
	int age;
}Person;

int main() {
	// 선언문 - 변수의 자료형과 초기값을 선언하는 문장
	//struct Person people = {"장보고", 20};
	/*Person people1 = { "장보고", 20 };
	Person people2 = { "이순신", 21 };
	Person people3 = { "강감찬", 23 };*/

	Person people[3] = { { "장보고", 20 } ,
						 { "이순신", 21 } ,
						 { "강감찬", 23 } };

	//people.age = 20;
	//people.name = "장보고";
	//strcpy(people.name, "장보고");

	/*printf("이름 : %s, 나이 : %d\n", people1.name, people1.age);
	printf("이름 : %s, 나이 : %d\n", people2.name, people2.age);
	printf("이름 : %s, 나이 : %d\n", people3.name, people3.age);*/
	for (int i = 0; i < 3; i++) {
		printf("이름 : %s, 나이 : %d\n", people[i].name, people[i].age);
	}

	printf("Person 구조체의 크기 : %d\n", sizeof(Person));
	return 0;
}