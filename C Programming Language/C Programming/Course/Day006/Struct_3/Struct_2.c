#include<stdio.h>
#pragma warning(disable:4996)

// ����ü ����
typedef struct Point {	// ������� �� ���� ��üȭ�ϴ� ���ǹ�
	int xpos;		// x
	int ypos;		// y


}Point;

int main() {
	// ����ü�� ������ ����
	//struct Point ap;
	Point start;
	Point end;
	Point third;
	//double distance;	//�������� �Ÿ��� ���庯��
	Point p[3];


	// ����ü ������ ���� ����� ���� : direct ������(.)
	start.xpos=0; //p[0].xpos		
	start.ypos=0; //p[0].ypos

	end.xpos = 10; //p[1].xpos
	end.ypos = 0; //p[1].ypos

	printf("��(x,y) = ��(%d,%d)\n,start.xpo ,start.ypos ");
	printf("��(x,y) = ��(%d,%d)\n,end.xpo ,end.ypos ");

	// ����

	// �Է¹�

	// ó����

	// ��¹�

	return 0;
}