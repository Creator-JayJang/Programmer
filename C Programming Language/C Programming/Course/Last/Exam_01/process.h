#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)

#include"Student.h"

// 전역변수선언부
Student* stu[100];		// 구조체 포인터 배열 선언
int index = 0;			// 등록인원수 카운트 변수

// 함수선언부
void findId();
void findName();
void addStudent();
void findStudent();
void showStudent(int index);
void showNameStudent(char* n);
void showAllStudent();

// 메인메뉴
void mainMenu(){
	printf("\n ==== 학생관리 프로그램 ====\n");
	printf("1. 신규학생등록\n");
	printf("2. 학생정보검색\n");
	printf("3. 전체학생출력\n");
	printf("4. 학생정보수정\n");
	printf("5. 프로그램종료\n");
	printf("----------------------------\n");
}

// 신규학생등록
void addStudent() {
	char name[20];		// 이름
	//char* curName;
	int id;				// 학번
	int kor, eng, math, tot;
	double avg;
	char grade;
	int flag = 1;		// 반복여부를 판정할 변수

	//index++;

	printf("\n== 신규학생등록 ==\n");
	printf("학번 = ");
	scanf("%d", &id);
		
	// 학번비교로직
	/*if(index > 0){
		for (int i = 0; i <= index; i++) {
			if (stu[i]->id == id) {
				printf("\n이미 등록된 학번입니다.\n");
				break;
			}
		}		
	}*/
	printf("이름 = ");
	scanf("%s", name);
	printf("국어 = ");
	scanf("%d", &kor);
	printf("영어 = ");
	scanf("%d", &eng);
	printf("수학 = ");
	scanf("%d", &math);

	tot = kor + eng + math;
	avg = tot / 3.0;

	switch ((int)avg / 10) {
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}

	stu[index] = (Student*)malloc(sizeof(Student)); // 동적할당
	stu[index]->id = id;
	//curName = (char*)malloc(strlen(name) + 1);
	strcpy(stu[index]->name, name);
	//stu[index]->name = name;
	stu[index]->kor = kor;
	stu[index]->eng = eng;
	stu[index]->math = math;
	stu[index]->tot = tot;
	stu[index]->avg = avg;
	stu[index]->grade = grade;
	index++;
	printf("\n학생정보가 등록되었습니다.\n");
	return;
}

void findStudent() {
	int menu;

	printf("\n== 학생정보검색 ==\n");
	printf("1. 학번검색\n");
	printf("2. 이름검색\n");
	printf("------------------\n");
	printf("선택 = ");
	scanf("%d", &menu);

	if (menu == 1) {
		findId();
	}
	else if (menu == 2) {
		findName();
	}

	else {
		printf("선택이 올바르지 않습니다.\n");
		printf("메인메뉴로 돌아갑니다.\n");
	}
	return;
}

void findId(){
	int id;

	printf("\n 검색할 학생의 학번을 입력해주세요.\n");
	printf("학번 = ");
	scanf("%d", &id);

	for (int i = 0; i < index; i++) {
		if (stu[i]->id == id) {
			// 학생정보출력
			showStudent(i);
			return;
		}
	}

	printf("입력한 학번의 학생은 존재하지 않습니다.\n");
	return;
}

void findName() {
	char name[20];

	printf("\n 검색할 학생의 이름을 입력해주세요.\n");
	printf("이름 = ");
	scanf("%s", name);

	for (int i = 0; i < index; i++) {
		if (strcmp(stu[i]->name, name) == 0) {
			// 같은 이름의 학생정보 출력
			showNameStudent(name);
			return;
		}
	}

	printf("입력한 이름의 학생은 존재하지 않습니다.\n");
	return;
}

void showStudent(int index) {
	printf("\n == 검색정보 ==\n");
	printf("----------------------------------------------------------------\n");
	printf("%3d %10s %5d %5d %5d %5d %5.2lf %5c\n",
		stu[index]->id, stu[index]->name, stu[index]->kor, stu[index]->eng,
		stu[index]->math, stu[index]->tot, stu[index]->avg, stu[index]->grade);
	//printf("-------------------------------------------------\n");
	return;
}

void showNameStudent(char* n) {
	printf("\n == 검색정보 ==\n");
	printf("----------------------------------------------------------------\n");
	for (int i = 0; i < index; i++) {
		if (strcmp(stu[i]->name, n) == 0) {
			printf("%3d %8s %5d %5d %5d %5d %5.2lf %5c\n",
				stu[i]->id, stu[i]->name, stu[i]->kor, stu[i]->eng,
				stu[i]->math, stu[i]->tot, stu[i]->avg, stu[i]->grade);			
		}		
	}
	return;
}

void showAllStudent() {
	printf("\n\t == 전체학생정보출력 ==\n");
	printf("----------------------------------------------------------------\n");
	if (index >= 0) {
		for (int i = 0; i < index; i++) {			
			printf("%3d %10s %5d %5d %5d %5d %5.2lf %5c\n",
				stu[i]->id, stu[i]->name, stu[i]->kor, stu[i]->eng,
				stu[i]->math, stu[i]->tot, stu[i]->avg, stu[i]->grade);
			printf("--------------------------------------------------------\n");
		}
		return;
	}
	else {
		printf("등록된 학생이 존재하지 않습니다.\n");
	}
	return;
}