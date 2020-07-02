/*
  ���� ���°��� ���α׷��� �����Ͻÿ�.
  ���� �־��� ����� ���Ŀ� �°� ���۵ǵ��� ���α׷��� �Ͻÿ�.

  <�Է� �� �������>
  ==== Bank Menu ====
  1. ���µ��
  2. �Ա�ó��
  3. ���ó��
  4. ��ü�� �ܾ���ȸ
  5. ���α׷� ����
  ===================
  �޴� =

  <ó������>
  1. ����(Account)�� ���̸�, �����ܰ�, ���¹�ȣ�� ��üȭ�Ͽ� ����ü�� �����Ѵ�.
  2. ���¹�ȣ�� ���������� �ߺ����� �Է¹޾� �ش� ���¸� �ĺ��ϴ� �뵵�� ����Ѵ�.
  3. �Ա�ó���� �ش� ���� ���¸� �ĺ��� �� ���� �ܰ� �Է��� �Աݱݾ��� �����Ͽ�
     ó���ϵ�, �ش� ���°� ���ų� �Աݱݾ��� 0���� ���� ��� ���� �޽����� ����Ѵ�.
  4. ���ó���� �ش� ���� ���¸� �ĺ��� �� ���� �ܰ� �Է��� ��ݱݾ��� �����Ͽ�
     ó���ϵ�, ���°� �������� �ʰų�, ��ݱݾ��� �����ܰ��� ������ ���� �޽�����
     ����Ѵ�.
  5. ��ü���� ������Ȳ�� ����� �� �ֵ��� ���α׷��� �Ѵ�.
  6. ����ڰ� ���ϴ� �۾��� ������ �� �ֵ��� ���α׷��� �Ѵ�.
  7. �������� ���α׷��� ����� �� �ֵ��� �����Ѵ�.
  8. �迭�� Ȱ���Ͽ� �� �̻��� ���� �Է¹޾� ó���� �� �ֵ��� �����Ѵ�.

  ==== �Ա�ó�� ====
  ���¹�ȣ =
     or �Է��� ���¹�ȣ�� �������� �ʽ��ϴ�.
  �Աݱݾ� =
     or �Աݱݾ��� 0���� ū ���� ���;� �մϴ�.
  =================
  �Ա�ó���� �Ϸ�Ǿ����ϴ�.
  ���� ���� �����ܾ��� xxx�� �Դϴ�.

  ==== ���ó�� ====
  ���¹�ȣ =
    or �Է��� ���¹�ȣ�� �������� �ʽ��ϴ�.
  ��ݱݾ� =
    or ����ܾ��� �����մϴ�.
  =================
  ���ó���� �Ϸ�Ǿ����ϴ�.
  ���� ���� �����ܾ��� xxx�� �Դϴ�.

*/

#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

#define MAX 100             // ���� 100��

//#define MAKE 1
//#define INPPUT 2
//#define OUTPUT 3
//#define SHOW 4
//#define EXIT 5

//enum MENU {MAKE=1, INPUT, OUTPUT, SHOW, EXIT};

typedef struct Account {
    char name[20];          // ���̸�
    int id;                 // ���¹�ȣ
    int balance;            // �����ܾ�
}Account;

// ��������
Account* accList;       // ��ü��
int index = 0;              // �迭�� ��ġ(������ ī��Ʈ)

// �Լ������
void showMenu();            // �޴����
void makeAccount();         // ���°���
void deposit();             // �Ա�ó��
void withdraw();            // ���ó��
void showAccount();         // ��ü���� �ܾ����

int main() {
    // ����
    int menu;               // ó���� �޴��� ������ ����

    // ������ ����
    //enum MAKE m;
    accList = (Account*)malloc(sizeof(Account) * 100);

    if (accList == NULL) {
        printf("�����Ҵ翡 �����Ͽ����ϴ�.\n");
        return 0;
    }

    while (1) { // ����Loop
        // �޴����
        showMenu();
        printf("�޴� = ");
        scanf("%d", &menu);

        // ����ڰ� �Է��� �޴��� ���� ó���� ���� ����
        if (menu == 1) {  // ���°����� ���� �Լ� ȣ��
            makeAccount();
        }
        else if (menu == 2) { // �Ա�ó���� ���� �Լ� ȣ��
            deposit();
        }
        else if (menu == 3) { // ���ó���� ���� �Լ� ȣ��
            withdraw();
        }
        else if (menu == 4) {
            showAccount();
        }
        else if (menu == 5) {
            for (int i = 0; i < MAX; i++)
                free(accList[i]);
            break;
        }
        else {
            printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n");
        }

        /*switch (m) {
        case MAKE:
        case INPUT:
        case OUTPUT:
        case SHOW:
        case EXIT:
        default:
        }*/

    }

    printf("���α׷��� �����մϴ�.\n");

    //free(accList);
    return 0;
}

// �Լ� ���Ǻ�
void showMenu() {
    printf("\n==== Bank Menu ====\n");
    printf("1. ���°���\n");
    printf("2. �Ա�ó��\n");
    printf("3. ���ó��\n");
    printf("4. ��ü�� �ܾ���Ȳ\n");
    printf("5. ���α׷� ����\n");
    printf("======================\n");
}

void makeAccount() {         // ���°���
    /* ���̸�, ���¹�ȣ, ���ݱݾ��� �޾Ƽ� ó���Ѵ�.  */
    char curName[20];
    int id;
    int money;

    // �Է¹� - ����ڿ��� ������ �Է¹޴´�.
    printf("\n==== �Ա�ó�� ====\n");
    //while (1) {
    printf("���¹�ȣ(xx) = ");
    scanf("%d", &id);

    //    for (int i = 0; i < MAX; i++) {
    //        if (accList[i].id != id) { // ������ ���°� �ƴ϶��
    //            break;
    //        }
    //        //if()
    //    }
    //}
    printf("���̸� = ");
    scanf("%s", curName);
    printf("���ݱݾ� = ");
    scanf("%d", &money);

    // ó���� - �Է¹��� ���� ����ü �迭�� �����Ѵ�.
    accList[index].id = id;
    //accList[0].name = curName; ���ڿ��� ���Կ�����(=)�� ����� �� ����.
    strcpy(accList[index].name, curName);
    accList[index].balance = money;

    // ��¹�
    printf("�Ա�ó���� �Ϸ�Ǿ����ϴ�.\n");
    printf("������ ���� �ܾ��� %d �� �Դϴ�.\n", accList[index].balance);
    index++; // ���ο� ���� ���� ������ �̵��Ѵ�.
}

void deposit() {             // �Ա�ó��
    /*
       ���¹�ȣ�� Ȯ���Ѵ�.
       �Աݱݾ��� �ް� �ش� ������ �ܾ׿� �����Ѵ�.
    */
    int id;
    int money;

    printf("\n==== �Ա�ó�� ====\n");
    printf("���¹�ȣ = ");
    scanf("%d", &id);

    // �Է¹��� ���¹�ȣ�� ����ü �迭�� ���¹�ȣ�� ��ġ�ϴ��� Ȯ��
    for (int i = 0; i < index; i++) {
        if (accList[i].id == id) { // �ش� ���¹�ȣ�� �����Ѵٸ�
            printf("�Աݱݾ� = ");
            scanf("%d", &money);
            accList[i].balance += money;

            printf("�Ա�ó���� �Ϸ�Ǿ����ϴ�.\n");
            printf("���� ������ ������ �ܾ��� %d ���Դϴ�.\n", accList[i].balance);
            return;
        }
        /*else {
            printf("���¹�ȣ�� ��ġ���� �ʽ��ϴ�.\n");
        }*/
    }
    printf("�Է��� ���¹�ȣ�� ��ġ���� �ʽ��ϴ�.\n");
}

void withdraw() {            // ���ó��
    /*
       1. ���¹�ȣ�� �Է¹޴´�.
       2. �Է��� ���¹�ȣ�� ����ü �迭�� �����ϴ��� �ľ�
       3. ��ݱݾ��� �Է¹޾Ƽ� ���ó���� �Ѵ�.
          ��, ������ �ܾ��� ��ݱݾ׺��� ���� ��� �ܰ����
    */
    int id;
    int money;

    printf("\n==== ���ó�� ====\n");
    printf("���¹�ȣ = ");
    scanf("%d", &id);

    //�ش� ���°� �����ϴ��� ���۾�
    for (int i = 0; i < index; i++) {
        if (accList[i].id == id) { // ���°� �����Ѵٸ�
            printf("��ݱݾ� = ");
            scanf("%d", &money);

            if (accList[i].balance < money) {
                printf("�ܾ��� �����մϴ�.\n");
                printf("���� ������ �����ܾ��� %d�� �Դϴ�.\n", accList[i].balance);
                return;
            }

            accList[i].balance -= money;
            printf("���ó���� �Ϸ�Ǿ����ϴ�.\n");
            printf("���� ������ �����ܾ��� %d�� �Դϴ�.\n", accList[i].balance);
            return;
        }
    }

    printf("�Է��� ���¹�ȣ�� ��ġ���� �ʽ��ϴ�.\n");
}

void showAccount() {         // ��ü���� �ܾ����
    /* ��ϵ� ���� ����ŭ �ݺ��ؼ� ����ϴ� �۾� */
    printf("\n==== ��ü�� �ܾ���Ȳ ====\n");
    for (int i = 0; i < index; i++) {
        printf("%5d  %10s  %20d\n", accList[i].id, accList[i].name, accList[i].balance);
    }
}





