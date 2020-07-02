#pragma once


#include"Book.h"
#include"Member.h"

// 전역변수 선언
Member* mem;
Book* book;

int size = 20;
int msize = 20;
int bookIndex = 0;
int memIndex = 0;
int numberofBooks = 0;	// 실제 등록되어있는 책의 개수
int numberofMems = 0;	// 실제 등록되어있는 회원 수
int cont;			// 계속진행여부를 판단할 변수

int bsearchidx = -1; // Book Search 함수에서 입력된 책의 위치값

enum{BLIST=1,BSEARCH,MREGISTER, RENT, RETURN, STAFF, END}; // customer
enum{BREG = 10, BDELETE, MLIST, BMFILE, GOBACK, FINISH}; // staff