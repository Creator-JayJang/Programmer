/*
  scanf() �Լ��� �̿��Ͽ� ���ڿ��� �Է¹޾� �迭�� ������ ��
  ����ϴ� ���α׷��� �����Ͻÿ�.

  %s
  %c

  <�Է¹� �������>
  ���ڿ� =

  �Է¹��� ���ڿ� :
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    // ����
    char str[80];       // ������ 79, �ѱ� 39
    int index = 0;      // �迭�� ��ġ��

    printf("���ڿ� = ");
    scanf("%s", str);
    printf("�Է¹��� ���ڿ� : %s\n", str);

    /*  ���� ������ ���  */
    while (str[index] != '\0') {
        printf("%c", str[index]);
        index++;

    }

    printf("\n");

    return 0;
}