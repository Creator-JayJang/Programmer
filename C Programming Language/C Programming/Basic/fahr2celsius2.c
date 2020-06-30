#include <stdio.h>

int main(void)
{
	int fahr;
	double celsius;		//double floating-point number
	
	//fahr = 100;		
	printf("input fahr temp : ");
	scanf("%d",&fahr);
	
	
	celsius = 5.0 / 9.0 * (fahr - 32);
	
	printf("fahr: %d ---> celsius: %.2f\n", fahr, celsius);		//floating point
	
	return 0;
	}