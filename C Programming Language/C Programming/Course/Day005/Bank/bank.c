/*
   ����ó���� �����ϴ� ���α׷�
   <�Է� �� �������>

   == Bank Menu ==
   1. �����
   2. �Ա�ó��
   3. ���ó��
   4. �ܾ���Ȳ
   5. �۾�����
   ================
   �޴� =

   == ����� ==
   id = xxx
   money = 10000
   ==============
   xxx ���� ���°� ��ϵǾ����ϴ�.

   == �Ա�ó�� ==
   id =
   moeny = 1000
   ==============


*/


#include<stdio.h>
#pragma warning(disable:4996)

// �Լ� �����
//void makeAccount(); // ���°���
void input(int* id, int* balance);       // �Ա�ó��
void output(int* id, int* balance);      // ���ó��
void show(int* id, int* balance);        // �ܾ׺���
int disp();         // �޴����

int main() {
    // ����
    int id, money;  // ����ȣ�� �ݾ�
    int menu = 0;       // ������ �޴��� �����ϱ� ���� ����

    // ���� Loop
    while (menu != 5) {
        // ȭ�����
        menu = disp();

        // ���õ� �޴��� ���� �۾��� �����ϴ� ����
        if (menu == 1) {
            // ���µ��
            printf("id = ");
            scanf("%d", &id);
            printf("money = ");
            scanf("%d", &money);

            printf("%d ���� ���°� ��ϵǾ����ϴ�.\n", id);
        }

        else if (menu == 2) {
            // �Ա�ó��
            input(&id, &money);
        }
        else if (menu == 3) {
            // ���ó��
            output(&id, &money);
        }
        else if (menu == 4) {
            // �ܾ׺���
           show(&id, &money);
        }
        else if (menu == 5) {
            printf("���α׷��� �����մϴ�.\n");
            return 0;
        }
        else {
            printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n");
        }

    } // while���� ��

    return 0;
}

// �Լ� ���Ǻ�

int disp() {
    int menu;
    printf("== Bank Menu ==\n");
    printf("1. �����\n");
    printf("2. �Ա�ó��\n");
    printf("3. ���ó��\n");
    printf("4. �ܾ���Ȳ\n");
    printf("5. �۾�����\n");
    printf("================\n");
    printf("menu = ");
    scanf("%d", &menu);
    return menu;
}

void input(int* id, int* balance) {  // �Ա�ó��
    /*
        1. id ��ġ���θ� �Ǵ�.
            //��ϵ� id
        2. ���� ���� �����ܾ��� �о�´�.
    */
    int sid; // �Է¹��� id
    int money;  // �Աݹ��� �Աݱݾ�

    printf("==== �Ա�ó�� ==== \n");
    printf("id = ");
    scanf("%d", &sid);

    // id ��ġ���� �Ǵ�
    if (*id == sid) { // id�� ��ġ�Ѵٸ�
        do {
            printf("�Աݱݾ� = ");
            scanf("%d", &money);
        } while (money < 0);
        // ������ �ܾ׿� �Է¹��� �ݾ��� �����Ѵ�.
        *balance += money;

        printf("�Ա�ó���� �Ϸ�Ǿ����ϴ�. \n");
    }
    else {
        printf("��ϵ� ���°� �������� �ʽ��ϴ�. \n");
    }
}

void output(int* id, int* balance) { // ���ó��
    /*
        id�� ��ġ����
        ��ݱݾ� > 0, �����ܾ� ���� ����
   */

    int sid;
    int money;

    printf("== ���ó�� == \n");
    printf("id = ");
    scanf("%d", &sid);

    // �ش� id�� �����ϴ��� �ľ��� �� ���� ������ �����Ѵ�.
    if (sid == *id) {
        do {
            printf("��ݱݾ� = ");
            scanf("%d", &money);
        } while (money < 0);

        if (*balance < money) { // ��ݱݾ��� �ܾ׺��� ū ���
            printf("�ܾ��� �����մϴ�. \n");
        
        }
        else {
            *balance -= money;
            printf("���ó���� �Ϸ�Ǿ����ϴ�. \n");

        }

    }

}

void show(int* id, int* balance) {
    /*
        id�� ��ġ�ϴ����� �Ǵ��ϰ� �����Ѵ�.
    */

    int sid;

    printf("== �ܾ׺��� ==\n");
    printf("id =\n");
    scanf("%d", &sid);

    if (*id == sid) {
        printf("������ �ܾ��� %d�� �Դϴ�. \n", *balance);
    }
    else {
        printf("��ġ�ϴ� ���°� �������� �ʽ��ϴ�. \n");
    }
    }