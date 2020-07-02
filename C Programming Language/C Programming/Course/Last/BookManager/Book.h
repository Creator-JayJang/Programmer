#pragma once

typedef struct Book {
	char title[50];
	char author[50];
	int rent;			// 빌린상태면 1, 아니면 0
	int rentID;			// 빌려간 회원의 ID
}Book;