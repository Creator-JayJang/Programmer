/*
   �迭�� �̿��� ���ڿ� ����
*/

#include<stdio.h>

int main() {
    char str[] = { 'G', 'o', 'o', 'd' };
    char str2[] = "Good";

    printf("str : %s\n", str);
    printf("str2 : %s\n", str2);

    printf("str�� ũ�� : %d\n", sizeof(str));
    printf("str[0]�� ũ�� : %d\n", sizeof(str[0]));

    return 0;
}