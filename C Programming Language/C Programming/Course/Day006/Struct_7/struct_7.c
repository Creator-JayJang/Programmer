/*
   ���� �־��� ��������Ŀ� �°� ���α׷��� �����Ͻÿ�.

   <�Է� �� �������>
   ==[���� �����ϱ�]==
   1.��  2.��  3.�簢��  4.����
   ---------------------------
   ���� = 1

   x = 5
   y = 5
   ��(x, y) = (5, 5)

   ==[���� �����ϱ�]==
   1.��  2.��  3.�簢��  4.��������  5.����
   -------------------------------------
   ���� = 2

   r = 10
   ������(r) = 10

   ==[���� �����ϱ�]==
   1.��  2.��  3.�簢��  4.��������  5.����
   -------------------------------------
   ���� = 3

   h = 7
   w = 6
   ����(h) = 7, �ʺ�(w) = 6

   <ó������>
   1. ��, ��, �簢���� ���� ����ü ��ü�� �����Ͽ� ó���� ��.
   2. ���� ����ʵ�� x, y��ǥ���� ���´�.
   3. ���� ����ʵ�� ������ r�� ���´�.
   4. �簢���� ����ʵ�� ����(h) �� �ʺ�(w)�� ���´�.
*/

#include<stdio.h>
#pragma warning(disable:4996)

// ����ü ���Ǻ�
typedef struct Point { // ��
	int x;
	int y;
}Point;

typedef struct Circle { // ��
	int r;
}Circle;

typedef struct Rect { // �簢��
	int w;
	int h;
}Rect;

// ������
enum TYPE { POINT = 1, CIRCLE, RECT, EXIT };

int main() {
	// ����
	int choice;
	enum TYPE type;

	while (1) { // ����Loop
		printf("\n==[���� �����ϱ�]==\n");
		printf("1.��  2.��  3.�簢��  4.����\n");
		printf("���� = ");
		scanf("%d", &choice);

		switch (choice) {
		case POINT:
		{
			Point p;
			printf("x = ");
			scanf("%d", &p.x);
			printf("y = ");
			scanf("%d", &p.y);

			printf("\n��(x, y) = (%d, %d)\n", p.x, p.y);
			break;
		}
		case CIRCLE:
		{
			Circle cp;
			printf("r = ");
			scanf("%d", &cp.r);

			printf("\n������(r) = %d\n", cp.r);
			break;
		}
		case RECT:
		{
			Rect cr;
			printf("w = ");
			scanf("%d", &cr.w);
			printf("h = ");
			scanf("%d", &cr.h);

			printf("\n����(h) = %d, �ʺ�(w) = %d\n", cr.h, cr.w);
			break;
		}
		case EXIT:
printf("���α׷��� �����մϴ�.\n");
return 0;

		default:
			printf("������ �ùٸ��� �ʽ��ϴ�.");
		}
	}

	
	return 0;
}