#pragma once


#include"Book.h"
#include"Member.h"

// �������� ����
Member* mem;
Book* book;

int size = 20;
int msize = 20;
int bookIndex = 0;
int memIndex = 0;
int numberofBooks = 0;	// ���� ��ϵǾ��ִ� å�� ����
int numberofMems = 0;	// ���� ��ϵǾ��ִ� ȸ�� ��
int cont;			// ������࿩�θ� �Ǵ��� ����

int bsearchidx = -1; // Book Search �Լ����� �Էµ� å�� ��ġ��

enum{BLIST=1,BSEARCH,MREGISTER, RENT, RETURN, STAFF, END}; // customer
enum{BREG = 10, BDELETE, MLIST, BMFILE, GOBACK, FINISH}; // staff