/*
   �ڵ����� ������ ����ִ� ��ü�� ����üȭ�� �� ���� �־��� ����� �����ϵ���
   ���α׷��� �����Ͻÿ�.
   <ó������>
   1. �ڵ�����ü�� �������̸�, ���翬��, ����ӵ��� ��������� �����Ѵ�.
   2. �ڵ����� ���Ӱ� ���ӽ� ����� �ӵ��� ��ȭ�� ����ϴ� �Լ��� �����Ѵ�.
   3. �ڵ����� �ְ�ӵ��� 200�� ���� �ʰ�, �� �� �����д��� ���� �� ���ӵǴ�
      �ӵ��� 10, ���Ǵ� ����� 2�� �پ��ٰ� �����Ѵ�.
   4. ��Ÿ ������ ���α׷��� �帧�� �°� �����Ѵ�.
*/

#include<stdio.h>

// ��ũ�� ��� ����
#define MAX_SPEED 200       // �ڵ����� �ְ�ӵ�
#define STEP 2              // �Ҹ�Ǵ� ���ᷮ
#define GAGE 10             // ���� �Ǵ� ���ӽ� �����ϴ� �ӵ���

// ����ü ���Ǻ�
typedef struct Car {
    char name[20];          // ������ �̸��� ��� ����
    int curSpeed;           // ���� �ӵ��� ��� ����
    int curGas;             // ���� ���ᷮ�� ��� ����
}Car;

// �Լ� �����
void carExcel(Car* c);            // �����д��� ����� ���� ��Ȳ
void carBreak(Car* c);            // �극��ũ�д��� ����� ���� ��Ȳ
void carDisp(Car* c);             // �ڵ����� ������¸� ���



int main() {
    // ����ü�� ���� ����
    Car tico = { "Ƽ��", 0, 100 };

    // ������� ���
    carDisp(&tico);
    printf("\n");

    // ����ó��
    carExcel(&tico);
    carDisp(&tico);
    printf("\n");

    // ����ó��
    carBreak(&tico);
    carDisp(&tico);
    printf("\n");

    return 0;
}

// �Լ� ���� ���Ǻ�
void carDisp(Car* tico) {
    printf("������ : %s\n", tico->name);
    printf("����ӵ� : %d\n", tico->curSpeed);
    printf("���翬�� : %d\n", tico->curGas);
}

void carExcel(Car* tico) {
    /*
      �����д��� ���� �� �ӵ��� 10�� �����Ѵ�.
      �����д��� ���� �� ����� 2�� �پ���.
      �ְ�ӵ� 200�� ���� �� ����.
    */

    if (tico->curGas >= STEP) { // ���ᰡ ����ϴٸ�....
        tico->curGas -= STEP;  // ���ᰨ��
        if (tico->curSpeed + GAGE > 200) {
            tico->curSpeed = 200;
        }
        else {
            tico->curSpeed += GAGE; // tico.curSpeed = tico.curSpeed + 10
        }
    }
    // return; 
}

void carBreak(Car* tico) {
    /*
       �ӵ��� 10 �ش�.
       ���ᰡ 2 �ش�.
    */

    if (tico->curGas >= STEP) { // ���ᰡ ����ϴٸ�
        tico->curGas -= STEP;
        if (tico->curSpeed - GAGE < 0) {
            tico->curSpeed = 0;
        }
        else {
            tico->curSpeed -= GAGE;
        }
    }
}