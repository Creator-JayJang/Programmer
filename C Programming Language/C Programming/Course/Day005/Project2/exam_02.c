/*
   �迭�� ����� Ȱ��
*/

#include<stdio.h>

int main() {
    // ����
    int x[5] = { 0 };
    char y[5] = { 'A', 'B', 'C', 'D', 'F' };
    double z[5] = { 1.1, 1.3 }; // �迭�� ũ�⺸�� ���� �ʱ�ȭ�Ǹ� ������� 0


    for (int i = 0; i < 5; i++) {
        printf("x[%d] = %d\n", i, x[i]);
        printf("y[%d] = %c\n", i, y[i]);
        printf("z[%d] = %lf\n", i, z[i]);
    }

    printf("x�迭�� ũ�� : %d\n", sizeof(x));
    printf("x[0]�� ũ�� : %d\n", sizeof(x[0]));

    return 0;
}