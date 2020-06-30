#include <stdio.h>

int main(void)
{
	int fahr;
	fahr = 100;

	int celsius1000 = 1000 * 5 * (fahr - 32) / 9;

	int left = celsius1000 / 1000;
	int right = (celsius1000 - left * 1000 + 5) / 10;

	//int temp = celsius1000 - left * 1000;
	//int rihgt = temp / 10 + (temp - (temp/ 10 * 10 ))/5;

	printf("fahr: %d ---> celsius %d. %d\n", fahr, left, right);

	return 0;
}
