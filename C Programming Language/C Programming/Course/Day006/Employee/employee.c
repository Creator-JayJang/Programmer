/*
   어떤 회사가 직원의 급여를 관리할 목적으로 급여관리 프로그램을 구현하려고 한다.
   현재 모든 직원은 정규직 사원이다.
   둘 이상의 직원에 대한 급여를 관리할 수 있도록 프로그램을 구현할 것.
   <입력 및 출력형식>
   == 직원관리 프로그램 ==
   1. 직원등록
   2. 지급될 급여 총합 출력
   3. 전체직원급여정보 출력
   4. 프로그램 종료
   =====================
   메뉴 =

   <처리조건>
   1. 직원을 객체화하는 구조체 Permament를 구현하라.
	  멤버필드로는 직원의 이름과 급여를 갖는다.
   2. 각 기능별 함수를 구현하라.
   3. 기타 조건은 출력형식에 맞게 프로그램이 동작되도록 구현하라.
*/

#include<stdio.h>
#pragma warning(disable:4996)

// 구조체 정의

typedef struct Employee {
	char name[20];
	int salary;
}Permament;

Permament emp[100];     // 100명의 직원을 저장할 공간
int index = 0;          // 저장될 위치값

// 함수 선언부
void addEmployee();     // 직원등록을 처리할 함수
void totSalary();       // 지급될 직원급여의 총합을 처리할 함수
void disp();            // 직원 급여정보를 출력할 함수

int main() {
		Permament p[5];

		while (1) {
			printf("수 = ");
			scanf("%d", &p[100]);

			if (p[index] == 0) break;
			index++;
		}

		for (int i = 0; i < index; i++) {
			sum += p[i];
		}

		/*for (int i = 0; i < 5; i++) {
			printf("%s : %d\n", p[i].name, p[i].salary);
		}*/

		disp(p);

		return 0;

	}

	void disp(Permament* p) {
		for (int i = 0; i < 100 ; i++) {
			printf("%s : %d\n", p->name, p->salary);
			p++;
		}
	}