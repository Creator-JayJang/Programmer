#pragma once

typedef struct Book {
	char title[50];
	char author[50];
	int rent;			// �������¸� 1, �ƴϸ� 0
	int rentID;			// ������ ȸ���� ID
}Book;