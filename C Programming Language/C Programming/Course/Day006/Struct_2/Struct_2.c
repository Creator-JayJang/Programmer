#include<stdio.h>

// ����ü ����
typedef struct Point { // ������� �� ���� ��üȭ�ϴ� ���ǹ�
	int xpos;		// x��ǥ��
	int ypos;		// y��ǥ��
}Point;

int main() {
	// ����ü�� ������ �����ؾ� ����ü�� ����� �� �ִ�.
	//struct Point ap;
	//typedef struct Point Point;
	Point start;
	Point end;
	Point third;
	//double distance;		// �� �� ������ �Ÿ��� ��� ����
	Point p[3];

	// ����ü������ ���� ����� ���� : direct������(.)
	start.xpos = 0; // p[0].xpos
	start.ypos = 0; // p[0].ypos

	end.xpos = 10;  //p[1].xpos
	end.ypos = 0;   //p[1].ypos


	printf("��(x, y) = ��(%d, %d)\n", start.xpos, start.ypos);
	printf("��(x, y) = ��(%d, %d)\n", end.xpos, end.ypos);

	return 0;
}