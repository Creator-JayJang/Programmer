#include<stdio.h>

int main() {
	int num = 1;	// 지역변수

	if (num == 1) {
		int num = 7; 
		num += 10;
		printf("num = %d\n", num);
	}

	printf("num = %d\n", num); // num =1

	return 0;
}