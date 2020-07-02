/*
	����(File) �����
	1. ����(File) : ���������ġ�� ����Ǵ� �ּҴ���
	
	2. ��Ʈ��(Stream) ��ü : ���
		- Input Stream : �Է°�ü
		- Output Stream : ��°�ü
	
	3. File ����ü
		typedef struct File{
		// ������ ����� �ּ�
		// ������ ����
		// ������ ����
		// ���� ������ ����
		....
		}File;

	4. ���� ���� �Ǵ� ������ ����
		- �ؽ�Ʈ ����(Text File) : *.txt, *.doc
		- ���̳ʸ� ����(Binary File) : *.hwpw, *.jpge,....(��κ�)

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	// step1. ���� ��ü ����(����ü)
	FILE* fp;

	// step2. ���� ��ü ���� �뵵 - ��°�ü/�Է°�ü
	
	fp = fopen("C:\\sample\\a.txt", "wt");

	/*
		r(read only) : �б� ����
		rt	/ rb	text/binary

		w(write only) : ���� ����
		wt	/	wb 
		a(append) : ���� �ڿ� �߰�
	*/

	if (fp == NULL) {
		printf("a.txt ������ �������� �ʽ��ϴ�.\n");
		return 0;	//���α׷� ����
	}

	printf("a.txt ������ ���Ƚ��ϴ�. \n");

	//step 3. ���� �۾�
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

		//step. 4 ���� ��ü �ݱ� 

	fclose(fp);

	return 0;
}