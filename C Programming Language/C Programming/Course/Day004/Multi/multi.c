/*
   ���� �־��� ����� ���Ŀ� �°� �����ϴ� ���α׷��� �����Ͻÿ�.

   <�Է� �� �������>
   == Main Menu ==
   1. �ִ밪���ϱ�
   2. �����ձ��ϱ�
   3. ���������ϱ�
   4. ���ⱸ�ϱ�
   5. ���α׷� ����
   ===============
   menu = 

   <ó������>
   1. ����ڰ� ���ϴ� �۾��� ������ �� �ֵ��� �����Ѵ�.
   2. �ִ밪�� �� ���� ������ �Է¹޾� ū ���� ��µǵ��� �����Ѵ�.
   3. �������� �� ���� ������ �Է¹޾� �� �� ������ �ڿ������� ���� ����Ͽ� ��µǵ��� �����Ѵ�.
   4. �������� �� ���� ������ �Է¹޾� ū ������� �����Ͽ� ��µǵ��� �����Ѵ�.
   5. ����� �� ���� ������ �ϳ��� �����ڸ� �Է¹޾� ����� ������ �� ����� ��µǵ��� �����Ѵ�.
   6. �������� ���α׷��� ������ �� �ֵ��� �����Ѵ�.
   7. ��Ÿ ������ ���α׷��� �帧�� �°� �����Ѵ�.
   8. �� ����(1~4)�� ������ �Լ��� �����Ѵ�.

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    // ����
    int first, second, third;   // �Է¹��� ���� ��� ����
    char op;                    // ������
    int res;                    // �����
    int menu;                   // �޴�

    // ó����
    while (1) { // ����Loop
        // �޴����
        printf("== Main Menu ==\n");
        printf("1. �ִ밪���ϱ�\n");
        printf("2. �����ձ��ϱ�\n");
        printf("3. ���������ϱ�\n");
        printf("4. ���ⱸ�ϱ�\n");
        printf("5. ���α׷�����\n");
        printf("�޴� = ");
        scanf("%d", &menu);

        if (menu == 1) {
            printf("ù��°�� = ");
            scanf("%d", &first);
            printf("�ι�°�� = ");
            scanf("%d", &second);

            if (first > second)
                printf("\n�ִ밪 = %d\n", first);
            else
                printf("\n�ִ밪 = %d\n", second);
        }
        else if (menu == 2) {
            printf("ù��°�� = ");
            scanf("%d", &first);
            printf("�ι�°�� = ");
            scanf("%d", &second);

            if (first > second) {
                int tmp = first;
                first = second;
                second = tmp;
            }

            res = 0;
            for (int i = first; i <= second; i++) {
                res += i;
            }

            printf("\n������ = %d\n", res);
        }
        else if (menu == 3) {
        
        }
        else if (menu == 4) {}
        else if (menu == 5) {
            break;
        }
        else {
            printf("\n�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n");
        }
    }

    printf("\n�ý����� �����մϴ�.\n");
    return 0;
