/*
  �ټ����� ������ �Է¹޾� �հ� �ִ밪�� ����ϴ� ���α׷��� �����Ͻÿ�.
  ��, �Է¹޴� ������ �迭�� �����Ͽ� ������ �� ó���� ��.
*/

#include<stdio.h>
#pragma warning(disable:4996)

// �Լ� ���Ǻ�
int maxinum(int a[], int size) {
    int max = a[0];

    for (int i = 1; i < size; i++) {
        if (a[i] > max) max = a[i];
    }

    return max;
}

int main() {
    // ����
    int data[5], sum = 0, max;

    // �Է¹�
    for (int i = 0; i < 5; i++) {
        printf("%d��° �� = ", i+1);
        scanf("%d", &data[i]);

        sum += data[i]; // sum = sum + data[i];
    }

    // ó���� - �ִ밪�� ����ϴ� ����
    max = maxinum(data, 5); // �迭���� �迭�� �����ּҿ� �����ϴ�.
    
    // ��¹�
    printf("�Է¹��� �ڷ� : ");
    for (int i = 0; i < 5; i++) {
        printf("%5d", data[i]);
    }

    printf("\n�հ� = %d, �ִ밪 = %d\n", sum, max);

    return 0;
}