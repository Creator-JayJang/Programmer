#pragma once

#include"Book.h"
typedef struct Member {
	char name[50];
	int memberId;
	int bookNum;	// ��Ʈ�� ������
	Book rent[3];    // ȸ���� ������ �ִ� å�� 3��
}Member;
