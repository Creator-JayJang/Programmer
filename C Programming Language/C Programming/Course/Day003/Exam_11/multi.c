/* 
	��Ƽ ���α׷��� �����Ͻÿ�.
	<�Է� �� �������>

	=== �޴� ===
	1. �ִ밪
	2. ������
	3. ������
	4. ����
	5. �� ��

	============

	�޴� = 

	<ó������>
	1. ���α׷��� ����Ǹ� �޴��� ȭ�鿡 ��µǵ��� �����Ѵ�.
	2. �־��� �޴��� ��ȣ�� �Է��Ͽ� �ش� ���α׷��� ���۵ǵ��� �����Ѵ�.
	3. �ִ밪�� �� ���� ������ �Է¹޾� ū ���� ��µǵ��� �����Ѵ�.
	4. �������� �� ���� ������ �Է¹޾� �� ���������� �ڿ����� ���� ����Ͽ� ��µǵ��� �����Ѵ�.
	5. �������� �� ���� ������ �Է¹޾� ū ������� �����Ͽ� ��µǵ��� �����Ѵ�.
	6. ����� �� ���� ������ �ϳ��� �����ڸ� �Է¹޾� �ش� ������ ����� �����Ͽ� ����� ��µǵ��� �����Ѵ�.
	7. ����ڰ� ���Ḧ �����ϸ� ���α׷��� ����ǵ��� �����Ѵ�.



*/


#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// ����
	int menu;	// ����ڰ� �Է��ϴ� �޴���
	int su1, su2, res = 0;

	// �Է¹�

	// ó����
	while (1) { // ���� Loop
		printf("== MENU ==\n");
		printf("1. �ִ밪\n"); 
		printf("2. ������\n"); 
		printf("3. ������\n");
		printf("4. ����\n");
		printf("5. ����\n");
		printf("=============\n");
		printf("�޴� = ");
		scanf("%d", &menu);

		if (menu == 1) { // �ִ밪�� ����ϴ� ����
			// ����
			//int su1, su2, res;		// ��������

			// �Է¹�
			printf("��1 = ");
			scanf("%d", &su1);
			printf("��2 = ");
			scanf("%d", &su2);

			// ó����
			if (su1 >= su2)
				res = su1;
			else
				res = su2;

			// ��¹�
			printf("�ִ밪 = %d\n\n", res);
		}
		else if (menu == 2) { // �������� ����ϴ� ����
			// ����
			//int su1, su2, 
			res = 0;
			int i;			//�ݺ��� ó���� �����
			int tmp;		//�ӽú���

			// �Է¹�
			printf("ù��°�� = ");
			scanf("%d", &su1); // 1

			printf("�ι�°�� = ");
			scanf("%d", &su2); // 10

			// ó����
			if (su1 >= su2) {
				tmp = su1;
				su1 = su2;
				su2 = tmp;
			}

			for (i = su1; i <= su2; i++) {
				res += i;
			}

			// ��¹�
			printf("������ = %d \n\n", res);

		}
	

		else if (menu == 3) { // �������� ����ϴ� ����

			int main(); {
				
				// ����
				int first, second, third, max;

				// �Է¹�
				printf("ù��° �� = ");
				scanf("%d", &first);
				printf("�ι�° �� = ");
				scanf("%d", &second);
				printf("����° �� = ");
				scanf("%d", &third);

				// ó����
				max = first > second ? first : second; // ù��°�� �ι�°�� ���Ͽ� ū���� max�� ��´�.
				max = max > third ? max : third; // max�� ����°���� ���ؼ� ū ���� max�� ��´�.

				// ��¹�
				printf("�ִ밪 = %d\n", max);

				return 0;
			}
			// ����
			// �Է¹�
			// ó����
			// ��¹�
		}

		else if (menu == 4) { // ���⸦ ����ϴ� ����
				// ����
			res = 0;
			char op;

				// �Է¹�
				printf("ù��° �� = ");
				scanf("%d", &su1);

				getchar(); //���͸� �ɷ��ش�

				do {
					printf("������(+,-,*,/) = ");
					scanf("%c", &op);
					getchar();
				} while (op != '+' && op != '-' && op != '*' && op != '/');

				do {
					printf("�ι�° �� = ");
					scanf("%d", &su2);
				} while (op == '/' && su2 == 0);

				// ó����
				switch (op) {
				case '+': res = su1 + su2; break;
				case '-': res = su1 - su2; break;
				case '*': res = su1 * su2; break;
				case '/': res = su1 / su2; break;
				}


				// ��¹�
				printf("%d %c %d = %d\n", su1, op, su2, res);

				return 0;
			}

		else if (menu == 5) { 
			printf("\n���α׷��� �����մϴ�. \n");
			return 0;
		}
		else {
			printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n");
		}
	}


	// ��¹�

	return 0;
}