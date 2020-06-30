#include <stdio.h>

int main() {

	unsigned char result = 0 * 56 & 0 * 0F;
	printf("0*%02*\n", result);

	return 0;

}