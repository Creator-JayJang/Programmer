/* 
	���ڿ� ó��
	ǥ�� �Է� �Լ� : scanf() - ������ ó������ ���Ѵ�.
					 gets()
					 fgets(���ڹ迭, ũ��, ǥ�� �Է� ��ü)


*/


#include<stdio.h>
//#pragma warning(disable:4996)

int main() {
	char words[11]; // 80byte - ���� 10��, �ѱ� 5��

	printf("���ڿ� = ");
	//scanf("%s", words); -- ���� ó���� �� �� ����.
	//gets(words);
	fgets(words, sizeof(words), stdin);

	printf("�Է¹��ڿ� : %s\n", words);
	//scanf("%s", words);
	//printf("�Է¹��ۿ� �����ִ� ���ڿ� : %s\n", words);


	return 0;
}