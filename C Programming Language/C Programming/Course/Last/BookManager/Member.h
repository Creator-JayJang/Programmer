#pragma once

#include"Book.h"
typedef struct Member {
	char name[50];
	int memberId;
	int bookNum;	// 렌트한 도서수
	Book rent[3];    // 회원이 빌릴수 있는 책은 3권
}Member;
